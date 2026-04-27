class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> sett;

        for (int num : nums) {
            sett.insert(num);
        }

        int longest = 0;

        for (int num : sett) {
            if (sett.find(num - 1) == sett.end()) {
                int currentNum = num;
                int count = 1;

                while (sett.find(currentNum + 1) != sett.end()) {
                    currentNum++;
                    count++;
                }

                longest = max(longest, count);
            }
        }

        return longest;
    }
};
