class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int high=0;
    int low=0;
    int n=nums.size();
    int ans=INT_MAX;
    int sum=0;

    while(high<n)
    {
    sum=sum+nums[high];
    while(sum>=target)//till work is being done fire
    {
        ans=min(ans,high-low+1);//answer comes above then do the subtraction
        sum=sum-nums[low];
        low++; 
    }
    
    high++;
  
    }
   if(ans==INT_MAX) return 0;
    return ans;
    }
};
