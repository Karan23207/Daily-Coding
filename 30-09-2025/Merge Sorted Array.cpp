// Leetcode Problem -88

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1; int i=0;
        while(i<n ){
            nums1[k] = nums2[i];
            i++;
            k--;
        }
        sort(nums1.begin(),nums1.end());

    }
};
