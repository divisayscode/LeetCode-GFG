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
		vector<vector<int>> treeTraversal(TreeNode* root){
		vector<vector<int>>ans;
        vector<int>pre,ino,post;
        stack<pair<TreeNode*,int>>st;
        if(root==NULL) return ans;
        st.push({root,1});
        while(!st.empty())
        {
            auto it=st.top();
            st.pop();

            if(it.second==1)//this means the preorder and that i will push the left in the stack
            {
            pre.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->left!=NULL)
            {
                st.push({it.first->left,1});
            }
            }

            else if(it.second==2)//means inorder and right node pushed
            {
            ino.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right!=NULL)
            {
                st.push({it.first->right,1});
            }
            }

            else{
              
            post.push_back(it.first->data);
            }
            
        }
        ans.push_back(ino);
        ans.push_back(pre);
        ans.push_back(post);
        return ans;

		}
};
