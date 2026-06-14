class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.size();
        int n2=magazine.size();
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        for(char c:ransomNote)
        {
            mp1[c]++;
        }
        for(char c:magazine)
        {
            mp2[c]++;
        }
        // for(int  i=0;i<n1;i++){
        // if(ransomNote[i]==magazine[i] && mp1[ransomNote[i]]==mp2[magazine[i]])
        // {
        //     return true;
        //     }
        // }this approach is wrong as i am only seing positionns not letters 

        for(int i=0;i<n1;i++)//iterate over ransom and check if magazine is sufficient or not 
        {
        if(mp1[ransomNote[i]]>mp2[ransomNote[i]])//count of a char in string 1 and string 2 
        {
            return false;
        }

        }
       return true;
        
    }
};
