class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
      
    // The steps that i have to follow are 
    //Temp variable
    //shifting 
    //placing the temp variable in the array 
    
    int n=arr.size();
    d=d%n;
    int temp[d];
    for (int i=0;i<d;i++)
    {
        temp[i]=arr[i];
    }
    for (int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[i-(n-d)];
    }
    
      
        
    }
};
