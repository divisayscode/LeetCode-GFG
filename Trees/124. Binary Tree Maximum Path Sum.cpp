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
    int height(TreeNode* root,int &maximum)
    {
    if(root==NULL) return 0;
    int left=max(0,height(root->left,maximum));//we did here this because consider the test case 2 -1 and it will always return that -1 and sum will be 1 instead of 2 so we had restricted the return of negative numbers with 0 so they dont interfere with max sum
    int right=max(0,height(root->right,maximum));
    maximum=max(maximum,root->val+left+right);
    return ((root->val)+max(left,right));

    }
    int maxPathSum(TreeNode* root) {
    int maximum=INT_MIN;//its int min because consider only -3 and ans should be -3 but if u do 0 then ans finally will be 0 ,thats wrong
    height(root,maximum);
    return maximum;    
    }
};
