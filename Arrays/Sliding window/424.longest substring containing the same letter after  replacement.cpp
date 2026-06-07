class Solution {
public:

    int find(vector<int>&arr)
    {
        
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
          return *max_element(arr.begin(),arr.end());

        }
      return -1;
      
    }

    int characterReplacement(string s, int k) {
    int low=0;
    int high=0;
    int n=s.length();
    int ans=0;
    int len=0;
    int max_count=0;
    int diff=0;
   
    vector<int>f(256,0);//here we made an array of size 256 because it was easy as indeces could be ascii
    for(high=0;high<n;high++)
    {
    f[s[high]]++;
    len=high-low+1;
    max_count=find(f);
    diff=len-max_count;
    //case where it fails its when diff>k
    while(diff>k)// this is very important
    {
        f[s[low]]--;
        low++;
        
         len=high-low+1;
         max_count=find(f);
         diff=len-max_count;

    }
    len=high-low+1;
    ans=max(len,ans);
    }
return ans;
    }
};
