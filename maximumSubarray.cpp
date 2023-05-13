class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int curSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            curSum = max(curSum + nums[i], nums[i]);
            maxSum = max(curSum, maxSum);
        }
        return maxSum;
    }
};
