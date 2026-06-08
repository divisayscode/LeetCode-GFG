class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int low=0;
    int high=0;
    int zeros=0;
    int len=0;
    int ans=0;

    int n=nums.size();

    for(high=0;high<n;high++)
    {
    if(nums[high]==0)
    {
        zeros++;
    }
    while(zeros>k){
        if(nums[low]==0)
        {
            zeros--;
            
        }
        low++;
        
    }
    len=high-low+1;
    ans=max(ans,len);
    } 
    return ans;   
    }
};
