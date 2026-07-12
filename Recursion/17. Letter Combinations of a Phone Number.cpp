class Solution {
public:
    vector<string>fun(string &digits,string &temp,vector<string>&ans,int idx, unordered_map<char,string>&f)
    {
        if(idx==digits.size())
        {
            ans.push_back(temp);
            return ans;
        }
        string choice=f[digits[idx]];
        for(int j=0;j<choice.size();j++)
        {
            temp.push_back(choice[j]);
            fun(digits,temp,ans,idx+1,f);
            temp.pop_back();

        }
    
        return ans;
    }
    vector<string> letterCombinations(string digits) {
    unordered_map<char,string>f;
    f['2']="abc";
    f['3']="def";
    f['4']="ghi";
    f['5']="jkl";
    f['6']="mno";
    f['7']="pqrs";
    f['8']="tuv";
    f['9']="wxyz";
    vector<string>ans;
    string temp;
    int idx=0;
    return(fun(digits,temp,ans,idx,f)); 
    
    }
};
