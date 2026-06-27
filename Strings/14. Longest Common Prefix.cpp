class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    int n=strs.size();
    string ans="";
    for(int j=0;j<strs[0].size();j++)
    {
        for(int i=0;i<n;i++)
        {
            if(strs[i][j]!=strs[0][j])
            {
               return ans;
            }
        }
        ans.push_back(strs[0][j]);
    }  
    return ans;  
    }
};
