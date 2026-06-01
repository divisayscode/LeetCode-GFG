//Brute force
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
          for(int j=i+1;j<n;j++)
          {
            for(int k=j+1;k<n;k++)
            {
               
               int sum= nums[i]+nums[j]+nums[k];
               if(sum==0)
               {
                vector<int>temp={nums[i],nums[j],nums[k]};
                sort(temp.begin(),temp.end());
                st.insert(temp);
               } 
               
            }
          }
        }
        //convert the set to the vector because originally i was asked that vector<vector<int>> return
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
//optimal approach
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>>ans;
    int n=nums.size();  
    sort(nums.begin(), nums.end());  
    for(int i=0;i<n;i++)// n-2 2 pointer and for that j and k 
    {
    int target=-nums[i];
    int j=i+1;
    int k=n-1;
    if(i>0 && nums[i]==nums[i-1]) continue;
    while(j<k)
    {
        int sum=nums[j]+nums[k];
        if(sum==target){
        ans.push_back({nums[i],nums[j],nums[k]});
        j++;
        k--;
        //i have to skip same numbers /duplicates
        while(j<k && nums[j]==nums[j-1])  j++;
        while(j<k && nums[k]==nums[k+1])  k--;
        }
        else if(sum<target)
        {
            j++;
        } 
        else k--;
    }

    }
    return ans;
    }
};
