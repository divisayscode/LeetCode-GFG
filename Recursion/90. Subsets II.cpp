class Solution {
public:
    vector<vector<int>>fun(vector<int>& nums,int idx,vector<int>&temp,vector<vector<int>>&ans)
    {
        int n=nums.size();
        if(idx==n)
       {
        ans.push_back(temp);
        return ans;
       }
      int nidx=idx;
      while(nidx+1<n && nums[nidx]==nums[nidx+1]) nidx++;
      fun(nums,nidx+1,temp,ans); 

       //when u are including 
       
       temp.push_back(nums[idx]);
       fun(nums,idx+1,temp,ans);
       temp.pop_back();
       

       return ans;
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    int n=nums.size();
    sort(nums.begin(),nums.end());   
    vector<int>temp;
    vector<vector<int>>ans;
    int idx=0;
    return(fun(nums,idx,temp,ans));    
    }
};
