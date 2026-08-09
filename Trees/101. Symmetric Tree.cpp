/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool help(TreeNode* left,TreeNode* right)
    {
        //its one single node maybe and return true if thats is the case
        if(left==NULL && right==NULL) return true;
        //if one of them is null meaning asymmetric
        if(left==NULL || right==NULL) return false;
        //if its not leaf lets say and values arent equal then false
        if(left->val!=right->val) return false;
        //both inner outer shall be equal 
        bool outer=help(left->left,right->right);
        bool inner=help(left->right,right->left);
        return outer && inner;
    }
    bool isSymmetric(TreeNode* root) {
    if(root==NULL)
    {
        return true;
    }  
    return(help(root->left,root->right));  
    }
};
