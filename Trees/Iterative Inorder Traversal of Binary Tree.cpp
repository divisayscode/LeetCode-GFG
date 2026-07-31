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
		vector<int> inorder(TreeNode* root){
	    stack<TreeNode*>st;
        vector<int>ans;
        if(root==NULL) return ans; 

        TreeNode* node=root;
        while(node!=NULL||!st.empty()) 
        {
            if(node!=NULL)
            {
                st.push(node);
                node=node->left;
            }
         
        else
        {node=st.top();
        st.pop();
        ans.push_back(node->data);
        node=node->right;
        }
       
		}
 return ans;
        }
};
