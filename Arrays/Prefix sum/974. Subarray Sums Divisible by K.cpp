class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int n=nums.size();
    //usage of a hashmap for this as %k==0 
    unordered_map<int,int>f;
    //for a empty subarray u have to have count as 1 
    f[0]=1;
    int rem=0;
    int sum=0;
    int result=0;

    for(int i=0;i<n;i++)
    {
    sum=sum+nums[i];
    rem=sum%k;
    if(rem<0)
    {
        rem=rem+k;//for negative numbers
    }
    result=result+f[rem];
    f[rem]++;
    } 
    return result;   
    }
};
