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
        //dont include
        fun(nums,idx+1,temp,ans);
        //include
        temp.push_back(nums[idx]);
        fun(nums,idx+1,temp,ans);
        temp.pop_back();

        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    int n=nums.size();
    vector<int>temp;
    vector<vector<int>>ans;
    int idx=0;
    return(fun(nums,idx,temp,ans));    
    }
};
