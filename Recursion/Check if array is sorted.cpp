class Solution {
  public:
    bool fun(vector<int>&arr,int low,int high)
    {
    int n=arr.size();
    if(arr[low]>arr[high]) return false;
    if(high==n-1) return true;
    return(fun(arr,low+1,high+1));
       
    }
    
    
    bool isSorted(vector<int>& arr) {
    if(arr.size()<=1)return true;
    int low=0;
    int high=low+1;
    bool ans=fun(arr,low,high);
    return ans;
    }
};
