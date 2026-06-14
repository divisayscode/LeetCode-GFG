class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
    vector<int>ans;
    stack<int>st;
    int n=asteroids.size();
    st.push(asteroids[0]);//one thing if its pos no issue , if its negative then push the next element //also , if its neg no issue if positive then push 
    for(int i=1;i<n;i++)
    {       
            if(asteroids[i]>0)
            {
                st.push(asteroids[i]);
                continue;
            }
            while(!st.empty() && st.top()>0 && abs(asteroids[i])>st.top())
            {
                st.pop();
            
            }
            if(st.empty()||st.top()<0)
            {
                st.push(asteroids[i]);
            }
            else if(!st.empty() && abs(asteroids[i])==st.top())
            {
                st.pop();
            }
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};
