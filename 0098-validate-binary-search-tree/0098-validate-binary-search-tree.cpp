/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        vector<int>num;
        traversal(num,root);
        for(int i=1;i<num.size();++i)
        if(num[i]<=num[i-1])return false;
        return true;
    }
    void traversal(vector<int> & num,TreeNode* node){
        if(!node)return;
        traversal(num,node->left);
        num.push_back(node->val);
        traversal(num,node->right);
    }
};