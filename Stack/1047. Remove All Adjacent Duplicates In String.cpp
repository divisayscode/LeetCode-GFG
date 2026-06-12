class Solution {
public:
    string removeDuplicates(string s) {
    int n=s.length();
    stack<char>st;
    string res;
    for(int i=0;i<n;i++)
    {
        if(st.empty())
        {
            st.push(s[i]);
            continue; // as push ke bad u want to go the next index

        }
        if(st.top()==s[i])
        {
            st.pop();
            continue;
        }
        st.push(s[i]);//if stack isnt empty and the elements are not equal so push
       
               
    } 
     while(!st.empty())//remember its while that u put stack in a string 
    {
        res.push_back(st.top());
        st.pop();
    }
      reverse(res.begin(),res.end());
      return res;
    }
};
