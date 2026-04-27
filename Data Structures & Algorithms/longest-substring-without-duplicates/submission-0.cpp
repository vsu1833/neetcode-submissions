class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxSize = 0;

        for(int i = 0; i < n; i++) {
            vector<char> ans;

            for(int j = i; j < n; j++) {
                if(find(ans.begin(), ans.end(), s[j]) == ans.end()) {
                    ans.push_back(s[j]);
                    maxSize = max(maxSize, (int)ans.size());
                } 
                else {
                    break;   
                }
            }
        }
        return maxSize;
    }
};