// GFG problem
class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        int m = a.size();
        int n = b.size();
        int left = m-1;
        int right = 0;
        
        while(left>=0 && right<n){
            if(a[left] > b[right]){
                swap(a[left] , b[right]);
                left-- , right++;
            }
             else{
                break;
             }
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end());

    }
};
