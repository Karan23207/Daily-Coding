// Leetcode Problem -416 
class Solution {
public:
bool check(vector<int>& arr, int i, int x, int n){
    if(x == 0){
        return true;
    }
    if(i >= n || x<0){
        return false;
    }
    bool pick= check(arr, i+1, x - arr[i], n);
    bool notpick= check(arr, i+1, x , n);

    return pick || notpick;
}
    bool canPartition(vector<int>& nums) {
        int index=0;
        int n=nums.size(); int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+nums[i];
        }
        if(sum %2 != 0){
            return false;
        }
        int target=sum/2;
        return check(nums, index, target, n);
    }
};
