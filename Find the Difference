class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> m;
        for(int i = 0; i < t.length(); i++)
        {
            if (m.find(t[i]) == m.end())
                m.insert({t[i], 1});
            else
                m[t[i]]++;
        }
        for(int i = 0; i < s.length(); i++)
            if (m.find(s[i]) != m.end())
                m[s[i]]--;

        for(auto i : m)
        {
            if (i.second == 1)  
                return i.first;
        }
        return'0';
    }
};
