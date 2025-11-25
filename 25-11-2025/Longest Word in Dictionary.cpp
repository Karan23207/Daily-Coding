// Leetcode Problem - 720

class Solution {
public:
    string longestWord(vector<string>& words) {
        int l = words.size();
        unordered_set<string> mp (words.begin() , words.end() );
        vector<pair<int , string> > res;
        int maxcount = -1;
        for( int i=0; i<l; i++ ){
            string ch = words[i];
            int leng = ch.size();
            int cnt = 0;
            string s = "";

            // Check prefix-by-prefix
            for (int j = 0; j < leng; j++) {
                s += ch[j];
                if (mp.find(s) != mp.end()) {
                    cnt++;
                } 
                else {
                    cnt = -1;  // mark as invalid word
                    break;
                }
            }

            // Valid buildable word
            if (cnt == leng) {
                res.push_back({cnt, ch});
                maxcount = max(maxcount, cnt);
            }
        }
        
        string ans = "";
        for (auto &p : res) {
            int cnt = p.first;
            string word = p.second;
            if (cnt == maxcount) {
                if (ans == "" || word < ans) {
                    ans = word;
                }
            }
        }

        return ans;
    }
};
