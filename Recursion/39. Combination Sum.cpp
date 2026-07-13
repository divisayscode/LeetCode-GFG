class Solution {
public:
    vector<vector<int>>fun(vector<int>& candidates, int target,int n,int idx, vector<int>&temp,
    vector<vector<int>>&ans,int sum)
    {
        if(idx==n) return ans;
        if(sum==target)
        {
            ans.push_back(temp);
            return ans;
        }
        //dont include the number 
        fun(candidates,target,n,idx+1,temp,ans,sum);
        //including the number 
        if(sum+candidates[idx]<=target)
        {
            temp.push_back(candidates[idx]);
            sum+=candidates[idx];
            fun(candidates,target,n,idx,temp,ans,sum);
            sum-=candidates[idx];
            temp.pop_back();

        }
        return ans;
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    int n=candidates.size();
    vector<int>temp;
    vector<vector<int>>ans;
    int idx=0;
    int sum=0;
    return(fun(candidates,target,n,idx,temp,ans,sum));    
    }
};
