using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tree
{

   public Node root;
   public Tree(Table table)
    {
        char[,] state = table.get_state();
        root = new Node(state, 0, table.turn, new KeyValuePair<int, int>(0,0), new KeyValuePair<int, int>(0,0),1);
        //child_values(table);
        //Debug.Log(table.cnt + " Broj dece u stablu: " + root.children.Count);
    }

    public Node next_root()
    {
        double score = root.f_score;
        List<Node> children = root.children;
        for (int i = 0; i < children.Count; i++)
        {
            if (children[i].f_score == score)
                return children[i];
        }
        return null;
    }

    public void child_values(Table table)
    {
        List<Node> children = root.children;
        for (int i = 0; i < children.Count; i++)
        {
            Debug.Log(table.cnt++ + ". dete ima vrednost: " + children[i].f_score);
        }
    }
}
