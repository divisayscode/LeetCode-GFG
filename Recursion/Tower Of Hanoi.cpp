class Solution {
  public:
    int fun(int n, int from, int to, int aux,int count)
    {
        
        if(n==1)
        {
            return count+1;
        }
        count=fun(n-1,from,aux,to,count); 
        count=fun(n-1,aux,to,from,count);
        count++;
        return count;
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
    int count=0;
    return(fun(n,from,to,aux,count));
        
    }
};
