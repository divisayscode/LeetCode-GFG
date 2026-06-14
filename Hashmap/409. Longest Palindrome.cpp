class Solution {
public:
    int longestPalindrome(string s) {
    unordered_map<char,int>mp;
    int n=s.length();
    string ans;
    int length=0;
    for(char c:s)
    {
        mp[c]++;
    }
    for(int i=0;i<n;i++)
    {
    if(mp[s[i]]%2==0 && mp[s[i]]!=0)
    {
        length=length+mp[s[i]];
        mp[s[i]]=0;
    }
    else if(mp[s[i]]%2!=0 && mp[s[i]]!=0)
    {
        length=length+mp[s[i]]-1;//keep the even numbers 
        mp[s[i]]=0;
       
    }
    }
if (length<n) return length+1;//if some odd toh add+1  ,meanns some characheter rehgya 
return length;
    }
};
