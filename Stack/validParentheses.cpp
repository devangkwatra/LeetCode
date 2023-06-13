class Solution {
public:
    bool matching(char a, char b)
    {
        if(a == '(' and b == ')')
            return true;
        if(a == '[' and b == ']')
            return true;
        if(a == '{' and b == '}')
            return true;
        else
            return false;
    }
    bool isValid(string str) {
        int n = str.length();
        if(n % 2 == 1)
            return false;
        stack<char> s;
        for(int i = 0; i < n; i++)
        {
            if(str[i] == '(' or str[i] == '{' or str[i] == '[')
                s.push(str[i]);
            else
            {
                if(s.empty())
                    return false;
                else if(matching(s.top(), str[i]) == false)
                    return false;
                else
                    s.pop();
            }        
        }
        return (s.empty() == true);
    }
};
