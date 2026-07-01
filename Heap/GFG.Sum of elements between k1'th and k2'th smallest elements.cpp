class Solution {
  public:
    long long sumBetweenTwoKth(long long A[], long long N, long long K1, long long K2) {
    priority_queue<long long>pq1;//max heap
    priority_queue<long long>pq2;
    long long a=0;
    long long b=0;
    long long sum=0;
    
    for(int i=0;i<K1;i++)
    {
      pq1.push(A[i]);  
    }
    for(int i=K1;i<N;i++)
    {
        if(A[i]<pq1.top())
        {
            pq1.pop();
            pq1.push(A[i]);
        }
    
    }
    a = pq1.top();
    for(int i=0;i<K2;i++)
    {
        pq2.push(A[i]);
    }
    for(int i=K2;i<N;i++)
    {
        if(A[i]<pq2.top())
        {
            pq2.pop();
            pq2.push(A[i]);
           
            
        }

    }
    b=pq2.top();
    for(int i=0;i<N;i++)
    {
        if(A[i]>a && A[i]<b)
        {
            sum=sum+A[i];
        }
    }
    
    return sum;
    }
};
