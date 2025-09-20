// Leetcode Problem - 152

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int pre =1;
        int suff=1;

        for(int i=0; i<n; i++){
            if(pre == 0) pre=1;
            if(suff == 0) suff=1;

            pre=pre * nums[i];
            suff=suff * nums[n-i-1];
            maxi=max(maxi,max(pre,suff));
        }
        return maxi;

    }
};
