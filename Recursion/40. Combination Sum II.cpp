class Solution {
public:
    vector<vector<int>>fun(vector<int>& candidates, int target,int n,int idx, vector<int>&temp,
    vector<vector<int>>&ans,int sum)
    {
        if(sum==target)
        {
            ans.push_back(temp);
            return ans;
        }
        if(idx==n) return ans;

        if(sum+candidates[idx]<=target)
        {
            temp.push_back(candidates[idx]);
            sum+=candidates[idx];
            fun(candidates,target,n,idx+1,temp,ans,sum);
            sum-=candidates[idx];
            temp.pop_back();
        }
        while(idx+1<n && candidates[idx+1]==candidates[idx]) idx++;   // skip duplicates before excluding
        fun(candidates,target,n,idx+1,temp,ans,sum); 
        return ans;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    int n=candidates.size();
    sort(candidates.begin(),candidates.end()); 
    vector<int>temp;
    vector<vector<int>>ans;
    int idx=0;
    int sum=0;
    return(fun(candidates,target,n,idx,temp,ans,sum));      
    }
};
