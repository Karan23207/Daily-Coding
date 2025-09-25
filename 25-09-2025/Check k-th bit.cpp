// Leetcode Problem-231 and GFG 

class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int ans=1<<k;
        
        if(n & ans)
        return 1;
        else
        return 0;
    }
};
