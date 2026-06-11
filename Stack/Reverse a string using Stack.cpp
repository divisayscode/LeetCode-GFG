// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        stack<int>st;
        int n=s.length();
        char c;
        string str;
        for(int i=0;i<n;i++)
        {
         st.push(s[i]);   
        }
        for(int i=0;i<n;i++)
        {
            c=st.top();
            st.pop();
            str.push_back(c);
            
        }
        return str;
    }
};
