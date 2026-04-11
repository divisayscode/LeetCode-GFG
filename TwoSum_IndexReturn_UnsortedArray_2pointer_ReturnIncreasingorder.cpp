class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>>numswithindex;
        for(int i=0;i<n;i++){
            numswithindex.push_back({nums[i],i});
        }
        sort(numswithindex.begin(),numswithindex.end());
        int i=0;
        int j=n-1;
        while(i<j){
            int sum=numswithindex[i].first+numswithindex[j].first;
            if(sum==target)
            {
                int a = numswithindex[i].second;
                int b = numswithindex[j].second;
                if(a > b) swap(a, b);
              return {a, b};
            }
            else if(sum<target)
            {
                i++;
            }
            else if(sum>target)
            {
                j--;
            }
        }
        return{-1,-1};
    }
};
