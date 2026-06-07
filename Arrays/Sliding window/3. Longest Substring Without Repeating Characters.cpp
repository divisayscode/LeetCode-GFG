class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int n=s.length();
    int low=0;
    int high=0;
    int k =0;
    int ans=0;
    unordered_map<char,int>f;
    //logic here is that we are not given any k so we have to by ourselves set it as len 
    // here for the non repeating charachters , we have to equate arr.size() and hashmap.size()
    for(high=0;high<n;high++)
    {
    f[s[high]]++;
    // window length == hashmap size then only our ans is correct 
    //and also hashmap size can never be greater than k  so we dont have that case as well 
    //only wrong value would be that hashmap size less than arr size
    k=high-low+1;
    while(f.size()<k)
    {
    f[s[low]]--;
    if(f[s[low]]==0)
    {
        f.erase(s[low]);
    }
    low++;
    k=high-low+1;
    }
    if(f.size()==k)
    {
        ans=max(ans,k);

    }
   
    }
 return ans;
    }
};
