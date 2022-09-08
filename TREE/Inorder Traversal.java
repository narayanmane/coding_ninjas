/*
    
    Following is the Binary Tree node structure:

    public class TreeNode {
        int data;
        TreeNode left;
        TreeNode right;
        TreeNode() {}
        TreeNode(int val) { this.data = val; }
        TreeNode(int val, TreeNode left, TreeNode right) {
           this.data = val;
            this.left = left;
            this.right = right;
        }
    }

*/
import java.util.*;
public class Solution {
      
    public static List < Integer > getInOrderTraversal(TreeNode root) {
    	// Write your code here.
        List<Integer> l= new ArrayList<>();
        help(root,l);
        return l;
    }
    public static void help(TreeNode root,List<Integer> l)
    {
        if(root==null)return;
        help(root.left,l);
        l.add(root.data);
        help(root.right,l);
    }
}
