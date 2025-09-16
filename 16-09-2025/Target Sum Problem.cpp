// Target Sum Problem Leetcode
class Solution {
public:
int ways(vector<int>& nums, int target , int i , int n){

     if (i == n) {
            return target == 0 ? 1 : 0;
        }

   int pos= ways(nums, target+nums[i], i+1, n);
   int neg= ways(nums, target-nums[i], i+1, n);

    return pos+neg;


}
    int findTargetSumWays(vector<int>& nums, int target) {
        int index=0;
        int n=nums.size();
        return ways(nums , target , index , n);
    }
};
