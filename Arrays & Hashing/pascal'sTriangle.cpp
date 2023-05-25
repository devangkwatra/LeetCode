class Solution {
public:
    vector<int> generateRow(int row)
    {
        vector<int> a;
        long long ans = 1;
        a.push_back(ans);
        for(int i = 1; i < row; i++)
        {
            ans = ans * (row - i);
            ans = ans / i;
            a.push_back(ans);
        }
        return a;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++)
            ans.push_back(generateRow(i));
        return ans;
    }
};
