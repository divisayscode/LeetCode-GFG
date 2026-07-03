class Solution {
  public:
    int fun(vector<int> &nums,int n)
    {
        if(n==1)
        {
            return nums[0];
        }
        int last=nums[n-1];
        int ans=fun(nums,n-1);
        return max(last,ans);
    }
    int largest(vector<int> &arr) {
        int n=arr.size();
        fun(arr,n);
        
    }
};
