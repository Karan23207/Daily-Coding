// GFG problem

class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int l=0 , e= n-1;
        int mini=-1;
        while(l <= e){
            int mid= e+l/2;
            if(arr[mid] <= x){
                mini= mid;
                l= mid+1;
            }
            else{
                e = mid-1;
            }
            
        }
        return mini;
    }
};
