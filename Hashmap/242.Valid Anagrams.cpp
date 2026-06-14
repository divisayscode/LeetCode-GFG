class Solution {
public:
    bool isAnagram(string s, string t) {
    unordered_map<char,int>mp1;
    unordered_map<char,int>mp2;
    int n=s.length();
    for(char c:s)
    {
        mp1[c]++;
    }
    for(char c:t)
    {
        mp2[c]++;
    }
    for(int i=0;i<n;i++)
    {
     if(mp1[s[i]]!=mp2[s[i]])
     {
        return false;
     }
    }
    if(s.length()!=t.length()) return false;//what if string t had extra letters so thats also an issue
    return true;   
    }
};
