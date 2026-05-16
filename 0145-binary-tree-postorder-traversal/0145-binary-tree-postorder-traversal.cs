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
    public IList<int> PostorderTraversal(TreeNode root) {
        List<int> ans=new List<int>();
        Traversal(root,ref ans);
        return ans;
    }
    private void Traversal(TreeNode node,ref List<int> ans)
    {
        if(node==null)return;
        Traversal(node.left,ref ans);
        Traversal(node.right,ref ans);
        ans.Add(node.val);
    }
}