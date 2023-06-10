class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i = 0; i < n - 2; i++)
        {
            if(nums[i] > 0)
                break;
            if(i > 0 and nums[i] == nums[i - 1])
                continue;
            int j = i + 1;
            int k = n - 1;
            while(j < k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                if(sum > 0)
                    k--;
                else if(sum < 0)
                    j++;
                else
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    while(j < k and nums[j] == nums[j + 1])
                        j++;
                    j++;
                    while(j < k and nums[k] == nums[k - 1])
                        k--;
                    k--;
                }
            }
        }
        return ans;
    }
};
