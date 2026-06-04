// using sliding window approach 
class Solution {
public:
    int maxSubarraySum(vector<int>& arr, int k) {

        int n=arr.size();
        int res=0;
        int sum=0;
        int low=0;
        int high=k-1;

        for(int i=low;i<=high;i++) {
            sum=sum+arr[i];
        }

        res=sum;

        while(high<n-1) {
            sum=sum-arr[low];
            low++;
            high++;
            sum=sum+arr[high];
            res=max(sum,res);
        }

        return res;
    }
};
