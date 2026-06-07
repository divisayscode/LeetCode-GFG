class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        unordered_map<char,int>f;
        int low=0;
        int high=0;
        int n=s.length();
        int ans=-1;//initialisation matters , dont make it 0 ,ques states that you need -1 if wrong 
        for(high=0;high<n;high++)// because we always move the high 
        //Step 1 include high in the information at the start
        {
           f[s[high]]++; // I have pushed values to the hashmap
           //Step 2 : if something is wrong so correct that basically low shrink
           //best case scenario k distinct mil gye how will we know this 
           //hashmap size == k so means unique letters exist krte hai
           // 2 is that hashmap>k more distinct than needed 
           //3 is that hashmap <k that less distinct than needed
           // but we want exactly k and if hashmap<k you dont need to shrink the window as its already less 
           while(f.size()>k) 
           {
               //remember in array we used to subtract but here we cant 
               //we can only change the frequency of the letters 
               f[s[low]]--;
               
               if(f[s[low]]==0)
               {
                   f.erase(s[low]);//because if some element goes 0 the hashmap would still count it 
                   //so we better remove that 
               }
               low++;//always use this after u did the if loop not before can raise error
           }
           if(f.size()==k)
          {
          int len=high-low+1;
          ans=max(ans,len);}
           
        }
        
        return ans;
    }
};
