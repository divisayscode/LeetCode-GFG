class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int maxdiff=INT_MAX;
    int n=nums.size();
    int ans=0;
    sort(nums.begin(), nums.end());

    for(int i=0;i<n-2;i++)
    {
        int j=i+1;
        int k=n-1;
        while(j<k){
          int sum=nums[i]+nums[j]+nums[k];
          int diff=abs(target-sum);
          if(diff<maxdiff)
          {
            maxdiff=diff;
            ans=sum;
          }

          if(sum==target)
          {
            return sum;
          }
          else if(sum <target) 
          {
            j++;
          }
          else{
            k--;
          }
        }

    }
      return ans;  
    }
};
