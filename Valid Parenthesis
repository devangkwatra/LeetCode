class Solution {
public:
    bool matching(char a, char b)
    {
        if (a == '(' and b == ')')
            return true;
        if (a == '{' and b == '}')
            return true;
        if (a == '[' and b == ']')
            return true;
        else
            return false;
    }
    bool isValid(string s) {
        if (s.size()%2 == 1)
            return false;
        stack<char> r;
        for(int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                r.push(s[i]);
            else
            {
                if (r.empty() == true)
                    return false;
                else if (matching(r.top(), s[i]) == false)
                    return false;
                else
                    r.pop();
            }
        }
        return (r.empty());
    }
};
