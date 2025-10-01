// Leetcode Problem

class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        int n=arr.size();
        int low=0 , high= n-1;
        int ans;
        while(low <= high){
            int mid=low+(high-low)/2;
            if(arr[mid] == target){
                ans=mid;
                break;
            }
            else if(arr[mid] > target){
                high= mid-1;
            }
            else{
                low=mid+1;
                ans=low;
            }
        }
        return ans;
    }
};

// by lower bound method

class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
        // by lower bound method
        int n=arr.size();
        int l=0 , e= n-1;
        int mini=n;
        while(l <= e){
            int mid= e+l/2;
            if(arr[mid] >= target){
                mini= mid;
                e=mid-1;
            }
            else{
                l = mid+1;
            }
            
        }
        return mini;
    }
};
