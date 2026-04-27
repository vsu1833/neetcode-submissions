class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> freq;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for(auto i : freq) {
            int num = i.first;
            int frequency = i.second;

            bucket[frequency].push_back(num);
        }

        vector<int> ans;

        for(int i = bucket.size() - 1; i >= 0 && ans.size() < k; i--) {
            for(int num : bucket[i]) {
                ans.push_back(num);
                if(ans.size() == k) break;
            }
        }

        return ans;
    }
};
