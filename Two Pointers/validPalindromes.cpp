class Solution {
public:
    bool isPalindrome(string s) {
        string ans =  "";
        for(int i = 0; i < s.length(); i++)
            if(isalnum(s[i]))
                ans.push_back(tolower(s[i]));
        int l = 0, r = ans.length() - 1;
        while(l < r)
        {
            if(ans[l] != ans[r])
                return false;
            else
            {
                l++;
                r--;
            }
        }
        return true;
    }
};
