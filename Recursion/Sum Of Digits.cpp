class Solution {
  public:
  int fun(int n)
  {
     if(n==0) return 0;   
     int d=n%10;
     n=n/10; 
     int ans=fun(n);
     return ans+d;
  }
    int sumOfDigits(int n) {
    
     fun(n);
    }
};
