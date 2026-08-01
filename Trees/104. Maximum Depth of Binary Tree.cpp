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
    int maxDepth(TreeNode* root) {
    int ans=0;
    if(root==NULL) return ans;    
    //So here two approaches can be applied , one is recursive and other is level order
    //Level order use space complexity of O(n) due to queue DS and recursive approach has a skewed tree then that also might have O(n) 
    //Recursive appproach 
    int left=maxDepth(root->left);
    int right=maxDepth(root->right);
    ans=1+max(left,right);
    return ans;
    }
};
