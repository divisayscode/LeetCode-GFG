/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int data;
 *     TreeNode *left;
 *     TreeNode *right;
 *      TreeNode(int val) : data(val) , left(nullptr) , right(nullptr) {}
 * };
 **/

class Solution{
    	public:
        void fun(TreeNode* node,vector<int>&path,vector<vector<int>>&ans)
        {
            if(node==nullptr)
            {
            return;
            }
            path.push_back(node->data);
            if(node->left==nullptr && node->right==nullptr)
            {
            ans.push_back(path);
            }
            else
            {
                fun(node->left,path,ans);
                fun(node->right,path,ans);
            }
           path.pop_back(); //backtrack

        }
		vector<vector<int>> allRootToLeaf(TreeNode* root) {
        vector<vector<int>>ans;
        vector<int>path;
        fun(root,path,ans);
        return ans;
		}
};
