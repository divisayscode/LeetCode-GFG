class Solution {
public:
    int maxNumberOfBalloons(string text) {
    int n=text.length();
    int count=0;
    unordered_map<char,int>mp;
    for(char c:text)
    {
        mp[c]++;
    } 
    
      //i thought of multiplying by some number but divison is better 
       
    return min({mp['b']/1, mp['a']/1, mp['l']/2, mp['o']/2, mp['n']});;   
    }
};
