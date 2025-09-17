// Leetcode problem-55( with memoization)

class Solution {
public:
bool check(vector<int>& arr, int i, int n, vector<int>& dp){
    if(i == n-1 ){
        return true;
    }
    if(arr[i] == 0){
        return false;
    }

    if(dp[i] != -1){
        return dp[i];
    }

    for(int j=1; j<=arr[i]; j++){
       if( i+j<n && check(arr , i+j , n, dp) == true )
       return dp[i]=true;
    }
    return dp[i]=false;

}
    bool canJump(vector<int>& nums) {
        int index=0;
        int n=nums.size();
        vector<int> dp(n , -1);
        return check(nums , index , n, dp);
    }
};
