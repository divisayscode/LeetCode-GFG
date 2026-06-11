// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        int best_ending=a[0];
        int ans=a[0];
        int n=a.size();
        for(int i=1;i<n;i++)
        {
            int v1=a[i];
            int v2=a[i]+best_ending;
            best_ending=min(v1,v2);
            ans=min(ans,best_ending);
        }
        return ans;
    }
};
