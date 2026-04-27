class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            set<int> hashset;   

            for(int j = i + 1; j < n; j++) {

                int rem = -(nums[i] + nums[j]);

                if(hashset.find(rem) != hashset.end()) {
                    vector<int> temp = {nums[i], nums[j], rem};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                hashset.insert(nums[j]);
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};
