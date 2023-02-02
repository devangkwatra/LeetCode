class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() == 0)
            return 0;
        int count = 1;
        int currCount = 1;
        for(int i = 1; i < nums.size(); i++) {
            if (nums[i] - nums[i - 1] == 1) {
                currCount++;
                count = max(currCount, count);
            }
            else if (nums[i] - nums[i - 1] == 0) {                // does not increment for duplicate elements but treats them valid.
                count = max(currCount, count);
            }
            else {
                currCount = 1;                                    // if difference between consecutive elements is > 1 count begins from 1 for another possible sequence.
            }
        }
        return count;
    }
};
