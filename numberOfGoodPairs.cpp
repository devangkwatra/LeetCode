class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(int i = 0 ; i < nums.size() - 1; i++)
            for(int j = i + 1; j < nums.size(); j++)                  // Brute Force
                if (nums[i] == nums[j])
                    count++;
        return count;
    }
};




/*
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> m;
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++)                                      // Using Hash Table
            m[nums[i]]++;
        for(auto i : m)
        {
            if (i.second > 1)
                count += (i.second * (i.second - 1) / 2);
        }
        return count;
    }
};
*/
