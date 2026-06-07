class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
    int n=arr.size();
    int sum=0;
    int low=0;
    int high=k-1;
    int ans=0;
    for(int i=low;i<=high;i++){
        sum=sum+arr[i];
    }// till here i will get the sum that is 100+200 for first window 
    
    while(high<n)
    {
       ans=max(ans,sum); 
       low++;
       high++;
       if(high==n)
       {
           break;
       }
       sum=sum-arr[low-1];
       sum=sum+arr[high];
    }
       return ans; 
    }
};
