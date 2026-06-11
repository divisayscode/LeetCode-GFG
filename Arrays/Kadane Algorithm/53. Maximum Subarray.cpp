class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //Kadanes algorithm is used when uu cant apply sliding window and when the lements are negative 
    int best_ending=nums[0];
    int ans=nums[0];
    int n=nums.size();
    int result;
    for(int i=1;i<n;i++)
    {
    int v1=nums[i];//stay alone 
    int v2=best_ending+nums[i];// add to the previous value
    best_ending=max(v1,v2);
    ans=max(ans,best_ending);
    }
   return ans;
    }
};
