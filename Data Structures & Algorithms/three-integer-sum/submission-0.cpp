class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       int sum = INT_MIN;
       vector<vector<int>> ans;
       for(int i =0; i < nums.size()-2; i++)
       {
        for(int j = i+1; j < nums.size()-1; j++)
        {
            for(int k = j + 1; k < nums.size(); k++)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    if(find(ans.begin(),ans.end(),temp)==ans.end())
                    {
                        ans.push_back(temp);

                    }
                }
            }
        }
       } 
       return ans;
    }
};
