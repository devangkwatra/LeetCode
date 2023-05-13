class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long prod = 1, c0 = 0;
        vector<int> ans(nums.size());
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                prod *= nums[i];
            else
                c0++;
        }
        if (c0 > 1) {
            for(int i = 0; i < ans.size(); i++) {                                       // for zeroes for more than one product will always be 0
                ans[i] = 0;
            }
        }
        else if (c0 == 0) {
            for(int i = 0; i < ans.size(); i++) {                                       // for no zero product will be divided by self
                ans[i] = prod / nums[i];
            }
        }
        else {
            for(int i = 0; i < ans.size(); i++) {
                if (nums[i] != 0) {
                    ans[i] = 0;                                                         // for one zero , if element visited is not zero, product will be zero
                }
                else {
                    ans[i] = prod;                                                      // and if visited element is zero, product will be multiplication of all
                }
            }
        }
        return ans;
    }
};
