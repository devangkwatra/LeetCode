class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        int maxSum = LONG_MIN;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            if(sum < 0)
                sum = 0;
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
