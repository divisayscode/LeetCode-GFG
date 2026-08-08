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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
    map<int,map<int,multiset<int>>>mp;//first int for the vertical , second for the level third multiset is for that at a particular level we can have many nodes and they may also repeat/duplicate so multiset
    queue<pair<TreeNode*,pair<int,int>>>q;
    q.push({root,{0,0}});
    while(!q.empty())
    {
     auto p=q.front();
     q.pop();
     TreeNode* node=p.first;
     int x=p.second.first;//level 
     int y=p.second.second;//value
     mp[x][y].insert(node->val);//insering value in the map
     if(node->left)
     {
        q.push({node->left,{x-1,y+1}});
     }
     if(node->right)
     {
        q.push({node->right,{x+1,y+1}});
     }

    }
    vector<vector<int>>ans;
    for(auto p:mp)
    {
        vector<int>level;
        for(auto q:p.second)
        {
        level.insert(level.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(level);
    }
    return ans;
    }
};
