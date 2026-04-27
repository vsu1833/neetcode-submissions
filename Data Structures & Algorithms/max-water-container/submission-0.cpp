class Solution {
public:
    int maxArea(vector<int>& heights) {
    int maxWater = 0;
    int n = heights.size();
    int left  = 0, right = n-1;
    while(left < right)
    {
        int mini = min(heights[left],heights[right]);
        int width = right - left;
        maxWater = max(mini * width,maxWater);
        if(heights[left]<heights[right])
        left++;
        else right--;
    }
    return maxWater;
    }
};
