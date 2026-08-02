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
    int widthOfBinaryTree(TreeNode* root) {
    int ans=0;
    queue<pair<TreeNode*,long long>>q;
    if(root==NULL) return 0;
    q.push({root,0});
    
    while(!q.empty())
    {  
        int n=q.size();
        long long first,last;
        long long min=q.front().second;//whatever is the first element in queue i have taken that minimum index so i have the smallest value of index
        for(int i=0;i<n;i++)
        {
        long long new_idx=q.front().second-min;
        TreeNode* node=q.front().first;
        if(i==0) first=new_idx;
        if(i==n-1) last=new_idx;
        q.pop();
    
        if(node->left!=NULL)
        {
            q.push({node->left,(2*new_idx)+1});
        }
        if(node->right!=NULL)
        {
            q.push({node->right,(2*new_idx)+2});
        }
        
        }
        ans=max(ans,(int)(last-first+1));
    }
    return ans;  
    }
};
