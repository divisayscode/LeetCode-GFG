class Solution {
  public:
    string fun(string &s,char c,int low,string ans)
    {
        int n=s.length();
        if(low==n) return ans;

        if(s[low]!=c)
            ans.push_back(s[low]);

        return fun(s,c,low+1,ans);
    }

    void removeCharacter(string &s, char c) {
        string ans="";
        s=fun(s,c,0,ans);
    }
};
