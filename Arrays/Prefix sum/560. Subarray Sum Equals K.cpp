class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int,int>f;
    f[0]=1;
    int n=nums.size();
    int sum=0;
    int res=0;//this is the count of the subarrays
    for(int i=0;i<n;i++)
    {
    sum=sum+nums[i];//sum-k , i have to ask the hasmap
    int ques=sum-k;
    res+=f[ques];
    f[sum]++;

    }
   return res;
    }
};
