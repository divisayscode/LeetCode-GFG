class Solution {
  public:
    int countTriplets(int sum, vector<int>& arr) {
        sort(arr.begin(),arr.end());//sort 
        int count=0;
        int n=arr.size();
        
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
            int totalsum=arr[i]+arr[j]+arr[k];
            if(totalsum<sum){
               count+=(k-j);//this is the important logic
               j++;
            }
            else{k--;
            
        }
    }
       
  }
  return count; 
    }
};
