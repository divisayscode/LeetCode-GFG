class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        //[1 6 2] 1 ka -1 6 ka 1 2 ka 1
        int n=arr.size();
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && st.top()>=arr[i])
            {
              st.pop();  
            }
            if(st.empty()) ans.push_back(-1); 
            else ans.push_back(st.top());
            st.push(arr[i]);
        }
        return ans;
    }
};
