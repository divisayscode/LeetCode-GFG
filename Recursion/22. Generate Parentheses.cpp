class Solution {
public:
    vector<string>fun(int open,int close,int n,string temp,vector<string>&ans)
    {
        if(open==n && close==n)
        {
            ans.push_back(temp);
            return ans;
        }
        if(open<n)//starting point for the function
        {
            temp.push_back('(');
            fun(open+1,close,n,temp,ans);
            temp.pop_back();
        }
        if(close<open)
        {
            temp.push_back(')');
            fun(open,close+1,n,temp,ans);
            temp.pop_back();
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
    //BACKTRACKING 
    int open=0;
    int close=0;
    vector<string>ans;
    string temp;
    return(fun(open,close,n,temp,ans));    
    }
};
