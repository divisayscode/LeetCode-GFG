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
    int height(TreeNode* node,int &maximum)
    {
        int ans=0;
        if(node==NULL) return ans;
        int left=height(node->left,maximum);
        int right=height(node->right,maximum);
        maximum=max(maximum,left+right);
        ans=1+max(left,right);
        return ans;
    }
    int diameterOfBinaryTree(TreeNode* root) {
    int maximum=0;  
    height(root,maximum); 
    return maximum;   
    }
};
