class Solution {
public:
    int addDigits(int num ) {
    //Base Case
    int ans=0;
    if(num<10) return num; 
    int d=num%10;
    num=num/10;
    ans=addDigits(num)+d;
    if(ans>9) return addDigits(ans);
    return ans;
    }
};
