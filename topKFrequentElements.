class Solution {
public:

    static bool cmp(pair<int, int> a, pair<int, int> b) {                           //comparator for sorting second of mapped values
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> m;

        vector <pair <int, int> > ans;

        for(int i =0; i < nums.size(); i++) m[nums[i]]++;
        for(auto it : m) ans.push_back({it.first, it.second});                      

        sort(ans.begin(), ans.end(), cmp);
        vector<int> ans2;
        for(int i = 0; i < k; i++)
            ans2.push_back(ans[i].first);
        return ans2;
    }
};
