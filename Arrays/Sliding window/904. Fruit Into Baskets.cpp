class Solution {
public:
    int totalFruit(vector<int>& fruits) {
    int n=fruits.size();
    int low=0;
    int high=0;
    int sum=0;
    int ans=INT_MIN;
    unordered_map<int,int>f;
    for(high=0;high<n;high++)
    {
     f[fruits[high]]++;
     //if something goes wrong then correct now they want atmost 2 that is exactly 2 
     //or less than 2 and only case that  can go wrong is that >2
     while(f.size()>2)
     {
        f[fruits[low]]--;
        if(f[fruits[low]]==0)
        {
            f.erase(fruits[low]);
        }
        low++;
     }
     if(f.size()==2 || f.size()<2)
     {
        int len=high-low+1;
        ans=max(len,ans);
     }
     
    }
    return ans;    
    }
};
