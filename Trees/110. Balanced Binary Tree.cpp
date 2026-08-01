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
    int maxheight(TreeNode* root)
    {
    int ans=0;
    if(root==NULL) return ans;
    int left=maxheight(root->left);
    int right=maxheight(root->right);
    //if any of the subtree is unbalanced we dont need to check the remaining tree
    if(left==-1 || right==-1) return -1;
    if(abs(left-right)>1) return -1;
    ans=1+max(left,right);
    return ans;
    }  

    bool isBalanced(TreeNode* root) {
    int ans;
    
    ans=maxheight(root);   
    if(ans==-1) return false;
    else return true; 
    }
};
