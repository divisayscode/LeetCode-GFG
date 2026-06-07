class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int n=arr.size();
        int low=0;
        int high=0;
        int sum=0;
        int ans=0;
        while(high<n)
        {
            sum=sum+arr[high];
            
            while(sum>target)
            {
                sum=sum-arr[low];
                low++;
            }
            if(sum==target)
            {
                return{low+1,high+1};
            }
            high++;
        }
        return{-1};
        
    }
};
