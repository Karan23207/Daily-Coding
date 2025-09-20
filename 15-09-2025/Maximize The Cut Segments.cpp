//  Maximize The Cut Segments

class Solution {
  public:
  int check(int n, int x, int y, int z,vector<int> &dp){
       if(n ==0 )
        return 0;
        
        if(n<0) return INT_MIN;
        
        if (dp[n] != -1) return dp[n];
        
        int opt1=1+check(n-x,x,y,z,dp);
        int opt2=1+check(n-y,x,y,z,dp);
        int opt3=1+check(n-z,x,y,z,dp);
        
        return dp[n]=max(opt1,max(opt2,opt3));
        
  }
    // Function to find the maximum number of cuts.
    int maximizeTheCuts(int n, int x, int y, int z) {
        // Your code here
        vector<int>dp (n+1 , -1);
       int result=check(n,x,y,z,dp);
        return result < 0 ? 0 : result;
    }
};
