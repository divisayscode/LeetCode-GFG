/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isitleaf(Node* node)
    {
        if(node->left==NULL && node->right==NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
    void leftboundary(Node* root,vector<int>&ans)
    {
     Node* node=root->left;
     while(node){
     if(!isitleaf(node))
     {
        ans.push_back(node->data); 
     }
     if(node->left) node=node->left;
     else node=node->right;
     }
    }
    void leafnodes(Node* root,vector<int>&ans)
    {
     if(root==NULL) return;
     if(isitleaf(root))
     {
        ans.push_back(root->data);
        return;
     }
     leafnodes(root->left,ans);
     leafnodes(root->right,ans);
    }
    void rightboundary(Node* root,vector<int>&ans)
    {
        
    vector<int>temp;
    Node* node=root->right;
    while(node){
     if(!isitleaf(node))
     {
        temp.push_back(node->data); 
     }
     if(node->right) node=node->right;
     else node=node->left;
    }
     reverse(temp.begin(),temp.end());
     for(int i=0;i<temp.size();i++)
     {
         ans.push_back(temp[i]);
     }
     
    }
    vector<int> boundaryTraversal(Node *root) {
    vector<int>ans;
    if(root==NULL) return ans;
    if(isitleaf(root))
    {
        ans.push_back(root->data);
        return ans;
    }
    
    ans.push_back(root->data);
    leftboundary(root,ans);
    leafnodes(root,ans);
    rightboundary(root,ans);
    return ans;
        
    }
};
