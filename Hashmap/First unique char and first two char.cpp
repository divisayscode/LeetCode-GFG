class Solution {
public:
    int firstUniqChar(string s) {
    unordered_map<char,int>mp;
    for(char c:s)
    {
        mp[c]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(mp[s[i]]==1)
        {
            return i;
        }
    } 
    return -1;  
    }
};

class Solution {
public:
    char repeatedCharacter(string s) {
    unordered_map<char,int>mp;
    int n=s.length();
    for(char c:s)
    {
        mp[c]++;
        if(mp[c]==2)
    {
        return c;
    }
    } 
   
    return ' ' ;   
    }
};
