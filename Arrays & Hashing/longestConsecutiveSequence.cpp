class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        int maxLen = 1;
        unordered_set <int> s (nums.begin(), nums.end());
        for(auto x : s)
        {
            if(s.find(x - 1) == s.end())
            {
                int count = 1;
                int a = x;
                while(s.find(a + 1) != s.end())
                {
                    a++;
                    count++;
                }
                maxLen = max(maxLen, count);
            }
        }
        return maxLen;
    }
};
