// LeetCode Problem - 33

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0 , high = n-1;

        while(low <= high){
            int mid=(low+high) / 2;
            if(nums[mid] == target){
                return mid;
            }
            // for left sorted path
            if(nums[low] <= nums[mid]){
                if(nums[low] <= target && nums[mid] >= target){
                    high=mid-1 ;
                }
                else{
                    low= mid+1;
                }
            }
            // for right sorted path
            else{
                if(target >= nums[mid] && target <= nums[high]){
                    low=mid+1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        return -1;
    }
};





