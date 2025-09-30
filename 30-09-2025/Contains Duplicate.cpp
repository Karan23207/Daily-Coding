// Leetcode Problem- 217

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> cnt;
        for(int i=0; i<nums.size(); i++){
            cnt[nums[i]]++;
            if(cnt[nums[i]] > 1)
            return 1;
        }
      
        return 0;

    }
};
