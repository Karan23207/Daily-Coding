// Leetcode Problem- 2414

class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int n = s.length();
        if(n == 0) return 0;
        int c = 1;
        int maxi =1;
        for(int i=1; i<n; i++){  
            if( s[i] - s[i-1] == 1){
                c++;
            }
            else c=1;
            maxi= max(c , maxi);    
        }

        return maxi;
    }
};
