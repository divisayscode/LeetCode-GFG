class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    //basically next greater element in a circular array 
    stack<int>st;
    vector<int>ans;
    int n=nums.size();
    // ans.push_back(-1);
    // st.push(nums[n-1]);
    for(int i=2*n-1;i>=0;i--)
    {
    //in a circular  array u have to use index as i%n and run loop two times 
    while(!st.empty() && st.top()<=nums[i%n])
    {
      st.pop();  
    }
    if(i<n)
    {
    if(st.empty()) ans.push_back(-1);
    else ans.push_back(st.top());
    }
    st.push(nums[i%n]);
    }  
    reverse(ans.begin(),ans.end());
    return ans;  
    }
};
