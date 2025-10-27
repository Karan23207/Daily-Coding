// Leet Code Problem- 81

class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int low =0 , high=n - 1;

        while(low <= high){
            int mid=(low + high) / 2;
            if(arr[mid] == target)
            return true;
            //  if arr[low] = arr[mid] = arr[high]
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++;
                high--;
                continue;
            }
            // for left sorted array
            if(arr[low] <= arr[mid]){
                if(target >= arr[low] && target<= arr[mid]){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            // for right sorted path
            else{
                if(target <= arr[high] && target >= arr[mid]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};
