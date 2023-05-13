class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0; int j = height.size() - 1;
        int ans = 0;
        while(i < j){
            if (height[i] <= height[j]){
                ans = max (ans, (j - i) * min(height[i], height[j]));
                i++;
            }
            else{
                ans = max (ans, (j - i) * min(height[i], height[j]));
                j--;
            }
        }
        return ans;
    }
};
