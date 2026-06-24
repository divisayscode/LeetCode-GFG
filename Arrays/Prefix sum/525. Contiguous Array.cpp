class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int n=nums.size();
    int zeros=0;
    int ones=0;
    int diff=0;
    int res=0;
    unordered_map<int,int>f;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==0) zeros++;
        else if(nums[i]==1) ones++;
        diff=zeros-ones;
        if(f.find(diff)==f.end())f[diff]=i;//if u couldnt find a new diff then only add
        if(diff==0)
        {
         res=max(res,i+1);   
        }
        else res=max(res,i-f[diff]); 
   
    }
    return res;    
    }
};
