// Leetcode Problem - 1572

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int m= mat.size();
        int n = mat[0].size();
        int sum =0;
        // for primary diag. sum
        for(int i=0; i<m; i++){
            sum += mat[i][i];
        }
        // for secondary diag. sum
        for(int i=0; i<m; i++){
            sum += mat[i][n-i-1];
        }

        int imid = m/2 , jmid = n/2; // finding index for mid for oddxodd matrix as we have to subtract in this
        if(m % 2 != 0) return sum - mat[imid][jmid];
        
        return sum;
    }
};
