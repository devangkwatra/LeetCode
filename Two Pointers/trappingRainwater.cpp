class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), maxWater = 0, l = 0, r = n - 1;
        int maxLeft = height[l], maxRight = height[r];
        while(l < r)
        {
            if(maxLeft <= maxRight)
            {
                l++;
                maxLeft = max(maxLeft, height[l]);
                maxWater += maxLeft - height[l];
            }
            else
            {
                r--;
                maxRight = max(maxRight, height[r]);
                maxWater += maxRight - height[r];
            }
        }
        return maxWater;
    }
};
