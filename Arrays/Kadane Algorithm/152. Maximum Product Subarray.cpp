class Solution {
public:
    int maxProduct(vector<int>& nums) {
    //here if we multiply a positive number with a big number more negative numbe that is less is the ans
    //if we multiply a neg num with a neg or small number ans is big so thats why we add a new possibility 
    //that is min_ending 
    int max_ending=nums[0];
    int min_ending=nums[0];
    int ans=nums[0];
  
    int n=nums.size();
    for(int i=1;i<n;i++)
    {
    int v1=nums[i];
    int v2=nums[i]*max_ending;
    int v3=nums[i]*min_ending;
    
    max_ending=max(v1,max(v2,v3));
    min_ending=min(v1,min(v2,v3));
    ans=max(ans,max_ending);
    }    
    return ans;
    }
};
