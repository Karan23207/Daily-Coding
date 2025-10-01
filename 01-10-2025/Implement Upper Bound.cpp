// GFG Problem

class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int l=0 , e= n-1;
        int mini=n;
        while(l <= e){
            int mid= e+l/2;
            if(arr[mid] > target){
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
