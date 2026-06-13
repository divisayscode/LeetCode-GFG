class Solution {
public:
    string removeDuplicates(string s, int k) {
    //in this question we need to check first whether the string letter appears k-1 times then only the k th letter will be able to pop the first k-1 letters so we need stack that saves the pair of charachter and its count 
    stack<pair<char,int>>st;
    int n=s.length();
    string ans;
    for(int i=0;i<n;i++)
    {
        char c=s[i];//for the single charachter one by one 
        if(st.empty()||st.top().first!=s[i] )
        {
            st.push({c,1});
            continue;
        }
        
        else if(st.top().first==s[i])
        {
            //now u have to check whether it appears k-1 times or not 
            if(st.top().second<k-1)
            {
                //basically u will see that top put in the pair and then pop it then push the count +1 value in the stack we canot just increase the count in the same stacj element 
                pair<char,int>p=st.top();
                st.pop();
                st.push({p.first,p.second+1});
                continue;
            }
        
        else{st.pop();}
        }//if its now k-1 so one more comes so its k so pop it 
        
    }
    while(!st.empty())
        {
        pair<char,int>p=st.top();
        st.pop();
        while(p.second--)//the number of times a certain charachter comes 
        {
        ans.push_back(p.first);
        }
        }
        
    reverse(ans.begin(),ans.end());
    return ans;

    }
};
