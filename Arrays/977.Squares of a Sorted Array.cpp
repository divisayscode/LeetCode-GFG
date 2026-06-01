//this code has time complexity of bigO(n)
//Space complexity is O(n) , I have used extra space for this question 

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>ans;
    vector<int>a;
    vector<int>b;
    int n=nums.size();
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
            a.push_back(nums[i]);// a will store the negative numbers
        }
        else
        {
            b.push_back(nums[i]);
        }
    }
    int m=a.size();
    int p=b.size();
    for(int i=0;i<m;i++){ // squaring the elements of a i.e negative elements 
        a[i]=a[i]*a[i];
    }
      for(int i=0;i<p;i++){//squaring the elements of b i.e positive elements
        b[i]=b[i]*b[i];
    }

    // now i have to reverse the elements of the first array as those will be sorted in descending order
    vector<int>temp;
    for(int i=0;i<m;i++){
        temp.push_back(a[m-i-1]);
    }
    //now temp contains the elements in ascending order 
    int i=0;
    int j=0;
    while(i<m && j<p){
        if(temp[i]<b[j]){
            ans.push_back(temp[i]);
            i++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
        }

       
    }
    while(j<p){
        ans.push_back(b[j]);
        j++;
    }     
    while(i<m){
        ans.push_back(temp[i]);
        i++;
    }
   return ans;
    }
};
//Space complexity is O(1) , I have not used extra space for this question 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);

        int i=0;
        int j=n-1;
        int k=n-1;

        while(i<=j) {
            int left=nums[i]*nums[i];
            int right=nums[j]*nums[j];

            if(left>right) {
                ans[k]=left;
                i++;
            }
            else {
                ans[k]=right;
                j--;
            }

            k--;
        }

        return ans;
    }
};
