// Method 1 , using reversal and comparison
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        //Reverse the string then check if the original and reversed one are the same or not 
        int reverse=0;
        int temp=x;
        while(temp!=0){
            reverse=(reverse*10)+(temp%10);
            temp=temp/10;
            if(reverse==x)
            {
                return true;
            }
        }
       return false;
        
        
    }
};
// Method 2 , using string 
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        string s=to_string(x);
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
    return true;
    }
};
