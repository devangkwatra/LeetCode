class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] > 0)
                break;
            if (i > 0 and nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = nums.size() - 1;
            while(j < k) {
                int num = nums[i] + nums[j] + nums[k];
                if (num < 0)
                    j++;
                if (num > 0)
                    k--;
                if (num == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while (j < k and nums[j] == nums[j + 1])
                        j++;
                    j++;

                    while (nums[k] == nums[k - 1] and j < k)
                        k--;
                    k--;
                }
            }
        }
        return ans;
    }
};
