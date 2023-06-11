class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int n = height.size();
        int l = 0, r = n - 1;
        while(l < r)
        {
            int area = min(height[l], height[r]);
            area = area * (r - l);
            maxArea = max(maxArea, area);
            if(height[l] < height[r])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};
