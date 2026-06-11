class Solution {
public:
    int maxsubarray(vector<int>&nums)
    {
    int res1=nums[0];
    int bestending=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
       bestending=max(bestending+nums[i],nums[i]);
       res1=max(res1,bestending);

    }
    return res1;

    }
    int  minsubarray(vector<int>&nums)
    {
    int res2=nums[0];
    int bestending=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
       bestending=min(bestending+nums[i],nums[i]);
       res2=min(res2,bestending);

    }
    return res2;
    }
    int maxAbsoluteSum(vector<int>& nums) {
    //it says that max absolute sum of any subarray it could be min or max right 
    int ans=0;
    ans=max(maxsubarray(nums),abs(minsubarray(nums)));
    return ans;    
    }
};
