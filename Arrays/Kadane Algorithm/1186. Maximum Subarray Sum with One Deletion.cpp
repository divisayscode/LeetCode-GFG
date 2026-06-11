class Solution {
public:
    int maximumSum(vector<int>& arr) {
    //This is a good problem and quite complex one the basic idea that we will use is the logic of 
    //one delete or no delete because we can delete or not also

    int nodelete=arr[0];//originally this is same as the original array 
    int onedelete=0;
    int maxsum=arr[0];
    int n=arr.size();
    for(int i=1;i<n;i++)
    {
    int prevnodelete=nodelete;
     //Case 1 that is no deletion
     int opt1=nodelete+arr[i];
     int opt2=arr[i];
     nodelete=max(opt1,opt2);
     //case 2 that is one deletion
     int op1=onedelete+arr[i];
     int op2=prevnodelete;
     onedelete=max(op1,op2);

     maxsum=max({maxsum,nodelete,onedelete});
    }
return maxsum;
    }
};
