// Brute Solution
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
    //   1.put all the non zero elements to the temp array 
       int n=arr.size();
       vector<int> temp;
       
       for(int i=0;i<n;i++){
           if(arr[i]!=0)
           {
               temp.push_back(arr[i]);
           }
       }
       
    //   2. move all the temp ones to the main array
       int nz=temp.size();
       for(int i=0;i<nz;i++)
       {
           arr[i]=temp[i];
       }
    //   3.put all the 0s at the end
       for (int i=nz;i<n;i++)
       {
           arr[i]=0;
       }
       
        
    }
};
// Optimal Solution
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
    int j=-1;
    int n=arr.size();
    for (int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    if (j == -1) return;
    for(int i=j+1;i<n;i++)
    {
        
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    }
};
