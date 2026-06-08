class Solution {
public:

    bool find(vector<int>&arr1,vector<int>&arr2)
    {
        for(int i=0;i<256;i++)
        {
            if(arr1[i]<arr2[i])
            {
                return false;
            }
        }
        return true;
    }

    string minWindow(string s, string t) {
    int low=0;
    int high=0;
    // int len=0;
    int n=s.length();
    int m=t.length();
    int start=0;
    int res=INT_MAX;
    vector<int>arr1(256,0);
    vector<int>arr2(256,0);
     for(char ch:t)
        {
            arr2[ch]++;
        }

    for(int high=0;high<n;high++)
    {
     arr1[s[high]]++;
     
     while(find(arr1,arr2))
     {
      int len=high-low+1;
      if(len<res)
      {
        res=len;
        start=low;
      }  
      arr1[s[low]]--;
      low++; 

     } 
     
    }
    if(res==INT_MAX)
        {
            return "";
        }
    return s.substr(start,res);
    }
};
