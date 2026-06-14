class Solution {
public:
    string frequencySort(string s) {
    unordered_map<char,int>f;
    string ans;
    char c;
   for(char c:s)
    {
        f[c]++;//map has now the frequencies of all the charachters
    } 
    //Now the main question arises how to sort it in descending order
    //a new concept of lambda functions come to our knowledge these are the inline functions by which we can custom sort as per our condition
    sort(s.begin(), s.end(), [&](char a, char b)
{    if(f[a]==f[b])
        return a<b;      // tie-break
    return f[a]>f[b];
});
    return s;
    }
};
