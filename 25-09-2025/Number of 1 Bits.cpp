// GFG PROBLEM
class Solution {
  public:
    int setBits(int n) {
        // Write Your Code here
        int cnt=0;
        while(n > 1){
            if(n%2 == 1)
            cnt++;
            n=n/2;
        }
        if(n==1) cnt++;
        return cnt;
    }
};
