class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.empty()) return 0;
       sort(nums.begin(),nums.end());
       int count = 1;
       int max_count = 1;
       for(int i = 0; i < (int)nums.size()-1; i++)
    {
        if(nums[i]==nums[i+1]-1)
        {
            count+=1;
        }
        else if (nums[i] != nums[i+1])
        {
            count = 1;
        }
        max_count = max(max_count, count);
    } 
    return max_count;
    }
};
