class Solution {
  public:
    vector<int> preGreaterEle(vector<int>& arr) {
        vector<int>ans;
        stack<int>st;
        int n=arr.size();
        //in this case first element will not have any previous greater element so we shall return its -1
        ans.push_back(-1);//as it wont have any greater element
        st.push(arr[0]); //so that it can be answer to any future value 
        for(int i=1;i<n;i++)
        {
           while(!st.empty() && st.top()<=arr[i])
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
