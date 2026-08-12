class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root==NULL||root==p||root==q)
    {
        return root;
    }
    TreeNode* left=lowestCommonAncestor(root->left,p,q);
    TreeNode* right=lowestCommonAncestor(root->right,p,q);
    if(left==NULL)
    {
        return right;
    }
    else if(right==NULL)
    {
        return left;
    }
    else
    {
        return root;
    }
    }
};
//Approach 2 and Simpler 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* ans=NULL;
    int fun(TreeNode* root, TreeNode* p, TreeNode* q)
    {
    if(root==NULL)
    {
        return 0;
    }
    int left=fun(root->left,p,q);
    int right=fun(root->right,p,q);
    int self=0;
    if(root==p||root==q)
    {
        self=1;
    }
    int total=left+right+self;
    if(total==2 && ans==NULL)
    {
        ans=root;
    }
    return total;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    //Simpler way 
    fun(root,p,q);
    return ans;    
    }
};
