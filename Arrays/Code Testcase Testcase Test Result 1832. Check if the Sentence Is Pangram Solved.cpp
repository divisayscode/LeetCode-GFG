class Solution {
public:
    bool checkIfPangram(string sentence) {
    bool seen[26]={false};//initially set false as i havent see anything
    for(int i=0;i<sentence.length();i++)
    {
        seen[sentence[i]-'a']=true;//sets that index to true of whichever alphabet it has seen 
    }
    for(int i=0;i<26;i++)//this is checking if any one of the 26 array is false means all the alphabets were not present
    {
    if(seen[i]==false) return false;
    }
    return true;    
    }
};
