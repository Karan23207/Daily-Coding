// House Robber Problem

class Solution {
public:
    int check(vector<int>& nums, int n, int index, vector<int>& dp) {
        if (index >= n) {
           return 0; 
            
        }

       if(dp[index] != -1){
        return dp[index];
       }

        int opt1 = nums[index] + check(nums, n, index + 2, dp);
        int opt2 = 0 + check(nums, n, index + 1, dp);
        return dp[index] = max(opt1, opt2);
    }

    int rob(vector<int>& nums) {
        int index = 0;
        int n = nums.size();
        vector<int> dp(n, -1);
        return check(nums, n, index, dp);
    }
};
