/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    List<long> subtrees=new List<long>();
    public int MaxProduct(TreeNode root) {
        long totalSum=DFS(root);
        long ans=0;
        foreach(long sum in subtrees){
            long product=(totalSum-sum)*sum;
            if(product>ans)
            ans=product;
        }
        return (int)(ans%1_000_000_007);
    }
    private long DFS(TreeNode node){
        if(node==null)
        return 0;
        long left=DFS(node.left);
        long right=DFS(node.right);
        long current=left+right+node.val;
        subtrees.Add(current);
        return current;
    }
}