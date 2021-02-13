using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Node {

    public double f_score;
    public List<Node> children;
    public char[,] state;
    public int depth;
    public bool turn, won = false, lost = false, deny = false;

    public Node(char[,] state, int depth, bool turn, KeyValuePair<int, int> move, KeyValuePair<int, int> build, int delta)
    {
        this.state = state;
        this.depth = depth;
        this.turn = turn;
        if(depth!=0) this.f_score = calc_score(move, build, delta);

        if (depth < 3 && !won && !lost && !deny && delta != -1 && (delta != 0 || indexOf(state[move.Key, move.Value]) % 4 == 0))
        {
            children = new List<Node>();
            possibleChildren();
        }
        else
            children = null;
    }

    public double calc_score(KeyValuePair<int, int> move, KeyValuePair<int, int> build, int delta) //racunamo vrenost cvora
    {
        KeyValuePair<int, int> f11, f12, f21, f22;
        if (!turn)
        {
            f11 = find_player(1); f12 = find_player(2);
            f21 = find_player(3); f22 = find_player(4);
        }
        else
        {
            f11 = find_player(3); f12 = find_player(4);
            f21 = find_player(1); f22 = find_player(2);
        }

        double diff11, diff12, diff21, diff22;
        diff11 = Math.Sqrt(Math.Pow(f11.Key - build.Key, 2) + Math.Pow(f11.Value - build.Value, 2));
        diff12 = Math.Sqrt(Math.Pow(f12.Key - build.Key, 2) + Math.Pow(f12.Value - build.Value, 2));
        diff21 = Math.Sqrt(Math.Pow(f21.Key - build.Key, 2) + Math.Pow(f21.Value - build.Value, 2));
        diff22 = Math.Sqrt(Math.Pow(f22.Key - build.Key, 2) + Math.Pow(f22.Value - build.Value, 2));
        double move_height = indexOf(state[move.Key, move.Value])%4;
        double build_height = indexOf(state[build.Key, build.Value])-16;
        double next_step = build_height - move_height;//koju visinu je sagradio u odnosu na visinu na kojoj se nalazi
        if (move_height == 3)
            if(depth == 1)
            {
                this.won = true;
                return 10000;
            }
            else
            {
                return 500;
            }
        if (build_height == 3 && depth == 1)
        {
            if (diff21 <= 1.5 && (indexOf(state[f21.Key, f21.Value])%4)>= 2)
            {
                lost = true;
                return -9999;
            }
            if (diff22 <= 1.5 && (indexOf(state[f22.Key, f22.Value]) % 4) >= 2)
            {
                lost = true;
                return -9999;
            }
        }


        if (build_height == 4 && depth == 1)
            //Debug.Log(GameObject.FindObjectOfType<Table>().cnt++ + " diff21- " + diff21+" f21["+f21.Key+", "+f21.Value+"]"+ " diff22- "+ diff22 + " f22[" + f22.Key + ", " + f22.Value + "]"+" build[" + build.Key + ", " + build.Value + "]");
        {
            if (diff21 <= 1.5 && (indexOf(state[f21.Key, f21.Value]) % 4) >= 2)
            {
                deny = true;
                return 5000 - delta;
            }
            if (diff22 <= 1.5 && (indexOf(state[f22.Key, f22.Value]) % 4) >= 2)
            {
                deny = true;
                return 5000 - delta;
            }
        }
        if (next_step == 2)
            next_step = -10;
        if (next_step == 3)
            next_step = -20;
        if (next_step == 4)
            next_step = -30;
        
        if (delta > 0)
            delta = delta * (-100);
        if (delta == 0)
            delta = 10;
        if (delta == -1)
            delta = 50;

        double diff = Math.Abs((diff11 + diff12) - (diff21 + diff22));
        double func = delta -depth + (next_step) * (1 + diff) ;
        f_score = func;
        return f_score;
    }

    public void possibleChildren()
    {
        char[,] moveState, buildState;
        KeyValuePair<int, int> currFigure; //indexOf char-a koji predstavlja figuricu
        List<KeyValuePair<int, int>> fields_move = new List<KeyValuePair<int, int>>();
        List<KeyValuePair<int, int>> fields_build = new List<KeyValuePair<int, int>>();

        for (int i = 0; i < 2; i++)
        {
            if (turn)
                if (i == 0) currFigure = find_player(1);
                else currFigure = find_player(2);
            else
                if (i == 0) currFigure = find_player(3);
                else currFigure = find_player(4);
            fields_move = possible_moves(currFigure.Key, currFigure.Value);//svi moguci potezi
            if (fields_move == null)
                continue;
            //Iteriramo kroz possible moves
            for (int j = 0; j < fields_move.Count; j++)
            {// Za svaki moguci slobodan field gde mozemo move
                moveState = cloneState(state);
                int delta = indexOf(state[currFigure.Key, currFigure.Value])% 4;
                move(currFigure, fields_move[j], moveState);// Pomeramo
                delta-= indexOf(moveState[fields_move[j].Key, fields_move[j].Value]) % 4;
                fields_build = possible_builds(fields_move[j].Key, fields_move[j].Value);//sada nam se igrac nalazi na fields_move[j]
                if (fields_build == null)
                    continue;
                //Iteriramo kroz possible builds
                for (int b = 0; b < fields_build.Count; b++)
                {
                    buildState = cloneState(moveState);
                    build(fields_build[b], buildState);
                    if (fields_move != null && fields_build != null)
                        children.Add(new Node(buildState, depth + 1, !turn, fields_move[j], fields_build[b], delta));
                }

            }
        }
    }

    public KeyValuePair<int, int> find_player(int id)
    {
        switch (id)
        {
            case 1:
                for (int i = 0; i < 5; i++)
                    for (int j = 0; j < 5; j++)
                        if (state[i, j] == 'A' || state[i, j] == 'B' || state[i, j] == 'C' || state[i, j] == 'D')
                            return new KeyValuePair<int, int>(i, j);
                break;
            case 2:
                for (int i = 0; i < 5; i++)
                    for (int j = 0; j < 5; j++)
                        if (state[i, j] == 'E' || state[i, j] == 'F' || state[i, j] == 'G' || state[i, j] == 'H')
                            return new KeyValuePair<int, int>(i, j);
                break;
            case 3:
                for (int i = 0; i < 5; i++)
                    for (int j = 0; j < 5; j++)
                        if (state[i, j] == 'a' || state[i, j] == 'b' || state[i, j] == 'c' || state[i, j] == 'd')
                            return new KeyValuePair<int, int>(i, j);
                break;
            case 4:
                for (int i = 0; i < 5; i++)
                    for (int j = 0; j < 5; j++)
                        if (state[i, j] == 'e' || state[i, j] == 'f' || state[i, j] == 'g' || state[i, j] == 'h')
                            return new KeyValuePair<int, int>(i, j);
                break;
        }
        return new KeyValuePair<int, int>(0, 0);
    }

    public int indexOf(char piece)
    {
        if (piece == 'A') // player 11 height 0
            return 0;
        if (piece == 'B') // player 11 height 1
            return 1;
        if (piece == 'C') // player 11 height 2
            return 2;
        if (piece == 'D') // player 11 height 3
            return 3;
        if (piece == 'E') // player 12 height 0
            return 4;
        if (piece == 'F') // player 12 height 1
            return 5;
        if (piece == 'G') // player 12 height 2
            return 6;
        if (piece == 'H') // player 12 height 3
            return 7;
        if (piece == 'a') // player 21 height 0
            return 8;
        if (piece == 'b') // player 21 height 1
            return 9;
        if (piece == 'c') // player 21 height 2
            return 10;
        if (piece == 'd') // player 21 height 3
            return 11;
        if (piece == 'e') // player 22 height 0
            return 12;
        if (piece == 'f') // player 22 height 1
            return 13;
        if (piece == 'g') // player 22 height 2
            return 14;
        if (piece == 'h') // player 22 height 3
            return 15;
        if (piece == '0') // player - height 0
            return 16;
        if (piece == '1') // player - height 1
            return 17;
        if (piece == '2') // player - height 2
            return 18;
        if (piece == '3') // player - height 3
            return 19;
        if (piece == '4') // player - height 4
            return 20;
        else
            return -1;
    }

    public char toIndex(int piece)
    {
        if (piece == 0) // player 11 height 0
            return 'A';
        if (piece == 1) // player 11 height 1
            return 'B';
        if (piece == 2) // player 11 height 2
            return 'C';
        if (piece == 3) // player 11 height 3
            return 'D';
        if (piece == 4) // player 12 height 0
            return 'E';
        if (piece == 5) // player 12 height 1
            return 'F';
        if (piece == 6) // player 12 height 2
            return 'G';
        if (piece == 7) // player 12 height 3
            return 'H';
        if (piece == 8) // player 21 height 0
            return 'a';
        if (piece == 9) // player 21 height 1
            return 'b';
        if (piece == 10) // player 21 height 2
            return 'c';
        if (piece == 11) // player 21 height 3
            return 'd';
        if (piece == 12) // player 22 height 0
            return 'e';
        if (piece == 13) // player 22 height 1
            return 'f';
        if (piece == 14) // player 22 height 2
            return 'g';
        if (piece == 15) // player 22 height 3
            return 'h';
        if (piece == 16) // player - height 0
            return '0';
        if (piece == 17) // player - height 1
            return '1';
        if (piece == 18) // player - height 2
            return '2';
        if (piece == 19) // player - height 3
            return '3';
        if (piece == 20) // player - height 4
            return '4';
        else
            return '-';
    }

    public bool possible_to_move(int xF, int yF, int xD, int yD)
    {
        int oldH = indexOf(state[xF, yF]) % 4, newH = indexOf(state[xD, yD]) - 16;
        if (newH - oldH > 1 || newH < 0 || Math.Abs(xF - xD) > 1 || Math.Abs(yF - yD) > 1 || (xF == xD && yF == yD) || newH == 4)
            return false;
        return true;
    }

    public List<KeyValuePair<int, int>> possible_moves(int xF, int yF)
    {
        List<KeyValuePair<int, int>> ret = new List<KeyValuePair<int, int>>();
        for (int i = xF - 1; i <= xF + 1; i++)
            for (int j = yF - 1; j <= yF + 1; j++)
            {
                if (i > 4 || i < 0 || j > 4 || j < 0) // da li postoji to polje (menja table.exists())
                    continue;
                if (xF == i && yF == j)
                    continue;
                if (possible_to_move(xF, yF, i, j))
                {
                    ret.Add(new KeyValuePair<int, int>(i, j));
                }
            }
        if (ret.Count == 0)
            return null;
        return ret;
    }

    public bool possible_to_build(int xF, int yF, int xD, int yD)
    {
        int oldH = indexOf(state[xF, yF]) % 4, newH = indexOf(state[xD, yD]) - 16;
        if (newH < 0 || Math.Abs(xF - xD) > 1 || Math.Abs(yF - yD) > 1 || (xF == xD && yF == yD) || newH == 4)
            return false;
        return true;
    }

    public List<KeyValuePair<int, int>> possible_builds(int xF, int yF)
    {
        List<KeyValuePair<int, int>> ret = new List<KeyValuePair<int, int>>();
        for (int i = xF - 1; i <= xF + 1; i++)
            for (int j = yF - 1; j <= yF + 1; j++)
            {
                if (i > 4 || i < 0 || j > 4 || j < 0) // da li postoji to polje (menja table.exists())
                    continue;
                if (xF == i && yF == j)
                    continue;
                if (possible_to_build(xF, yF, i, j))
                {
                    ret.Add(new KeyValuePair<int, int>(i, j));
                }
            }
        if (ret.Count == 0)
            return null;
        return ret;        
    }

    public char[,] cloneState(char[,] original)
    {
        char[,] copy = new char[5, 5];
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 5; j++)
                copy[i, j] = original[i, j];
        return copy;
    }

    public void move(KeyValuePair<int, int> from, KeyValuePair<int, int> to, char[,] state)
    {
        int oldH = indexOf(state[from.Key, from.Value]) % 4, newH = indexOf(state[to.Key, to.Value]) - 16;

        state[to.Key, to.Value] = toIndex(indexOf(state[from.Key, from.Value]) + (newH-oldH));
        state[from.Key, from.Value] = toIndex(indexOf(state[from.Key, from.Value]) % 4 + 16);
    }

    public void build(KeyValuePair<int, int> to, char[,] state)
    {
        state[to.Key, to.Value] = toIndex(indexOf(state[to.Key, to.Value]) + 1);
    }
}
