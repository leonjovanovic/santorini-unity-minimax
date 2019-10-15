using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class AI //TODO pri postavljanju figurica kada bele stavimo jedne pored drugih zamrzne se Unity POPRAVITI
{               //TODO nece nesto da pravi nivo 2
    Table table;
    bool id;
    Tree tree;

    public AI(bool id) {
        table = GameObject.FindObjectOfType<Table>();
        this.id = id;
        //Mozda da dodamo lokalne reference na figurice playera datog IDja
    }

    public void doAI()
    {
        if (table.p11 || table.p21) place_figurines(); //postavljamo figurice prvog ili drugog igraca u zavisnosti od p11 i p12 a table.turn kontrolise AI
        else
        {
            System.Diagnostics.Stopwatch watch = System.Diagnostics.Stopwatch.StartNew();
            tree = new Tree(table);
            watch.Stop();
            table.time+=watch.ElapsedMilliseconds;
            table.num++;
            minimax(tree.root, 0, true, Double.MinValue, Double.MaxValue);
            Node next = tree.next_root();// Tabla sa sledecim odigranim potezom;
            //Debug.Log("Najbolji score: " + tree.root.f_score);
            tree = null;
            //TODO Garbage collector     
            GC.Collect();// proveriti da li ubrzava ili usporava proces
            if(next != null)table.repaint(next.state);
            //table.print_state();
            table.turn = !table.turn;
        }
    }

    public void place_figurines()
    {
        if (table.p11)
        {   //Prva figurica prvog igraca
            System.Random rnd = new System.Random();
            int x = rnd.Next(0, 4);
            int y = rnd.Next(0, 4);
            GameObject.Find("Tile" + x + "" + y + "/Cube - Visual").GetComponent<TileButton>().set_up_figurines();
            //Druga figurica prvog igraca
            int x1 = rnd.Next(0, 4);
            int y1 = rnd.Next(0, 4);
            while (x == x1 && y == y1)
            {
                x1 = rnd.Next(0, 4);
                y1 = rnd.Next(0, 4);
            }
            GameObject.Find("Tile" + x1 + "" + y1 + "/Cube - Visual").GetComponent<TileButton>().set_up_figurines();
        }
        else
        {   //Prva figurica drugog igraca
            int x = Math.Abs((int)(GameObject.Find("Player11").transform.position.x + GameObject.Find("Player12").transform.position.x) / 2), x1 = x;
            int y = Math.Abs((int)(GameObject.Find("Player11").transform.position.z + GameObject.Find("Player12").transform.position.z) / 2), y1 = y;
            while (GameObject.Find("Tile" + x + "" + y + "/Cube - Visual").GetComponent<TileButton>().busy)
            {
                if (x == 4)
                {
                    x--; continue;
                }
                if (x == 0)
                {
                    x++; continue;
                }
                if (y == 4)
                {
                    y--; continue;
                }
                if (y == 0)
                {
                    y++; continue;
                }
                if (x == 3) x--;
                else x++;
            }
            GameObject.Find("Tile" + x + "" + y + "/Cube - Visual").GetComponent<TileButton>().set_up_figurines();
            //Druga figurica drugog igraca
            x = x1; y = y1;//Da bi menjao y od pocetnih pozicija
            while (GameObject.Find("Tile" + x + "" + y + "/Cube - Visual").GetComponent<TileButton>().busy)
            {
                if (x == 4)
                {
                    x--; continue;
                }
                if (x == 0)
                {
                    x++; continue;
                }
                if (y == 4)
                {
                    y--; continue;
                }
                if (y == 0)
                {
                    y++; continue;
                }
                if (y == 3) y--;
                else y++;
            }
            GameObject.Find("Tile" + x + "" + y + "/Cube - Visual").GetComponent<TileButton>().set_up_figurines();
        }
    }

    public double minimax(Node node, int depth, bool isMaximizingPlayer)
    {
        if (node.children == null || depth == 3)//TODO posle promeniti da je promenjljivo
        {
            return node.f_score;
        }
        if (isMaximizingPlayer)
        {
            node.f_score = Double.MinValue;
            for (int i = 0; i < node.children.Count; i++)
            {
                Node n = node.children[i];
                double value = minimax(n, depth + 1, false);
                node.f_score = Math.Max(node.f_score, value);
            }
            return node.f_score;
        }
        else
        {
            node.f_score = Double.MaxValue;
            for (int i = 0; i < node.children.Count; i++)
            {
                Node n = node.children[i];
                double value = minimax(n, depth + 1, true);
                node.f_score = Math.Min(node.f_score, value);
            }
            return node.f_score;
        }
    }

    public double minimax(Node node, int depth, bool isMaximizingPlayer, double alpha, double beta)
    {
        if (node.children == null || depth == 3)//TODO posle promeniti da je promenjljivo
        {
            return node.f_score;
        }
        if (isMaximizingPlayer)
        {
            node.f_score = Double.MinValue;
            for (int i = 0; i < node.children.Count; i++)
            {
                Node n = node.children[i];
                double value = minimax(n, depth + 1, false, alpha, beta);
                node.f_score = Math.Max(node.f_score, value);
                alpha = Math.Max(alpha, node.f_score);
                if (beta <= alpha)
                    break;
            }
            return node.f_score;
        }
        else
        {
            node.f_score = Double.MaxValue;
            for (int i = 0; i < node.children.Count; i++)
            {
                Node n = node.children[i];
                double value = minimax(n, depth + 1, true, alpha, beta);
                node.f_score = Math.Min(node.f_score, value);
                beta = Math.Min(beta, node.f_score);
                if (beta <= alpha)
                    break;
            }
            return node.f_score;
        }
    }
}
