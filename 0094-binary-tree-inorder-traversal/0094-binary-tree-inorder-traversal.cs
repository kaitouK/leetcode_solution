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
    public IList<int> InorderTraversal(TreeNode root) {
        List<int> ans=new List<int>();
        if(root!=null)
        DFS(root,ref ans);
        return ans;
    }
    private void DFS(TreeNode node,ref List<int> ans)
    {
        if(node==null)return;
        DFS(node.left,ref ans);
        ans.Add(node.val);
        DFS(node.right,ref ans);
    }
}