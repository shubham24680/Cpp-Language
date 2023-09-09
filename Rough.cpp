#include<iostream>
#include<limits.h>
using namespace std;

class Solution
{
public:
    int myAtoi(string s)
    {
        if (s.size() == 0)
            return 0;

        int len = s.size(), i = 0, sign = 1;
        while (i < len && s[i] == ' ')
            i++;

        if (i == len)
            return 0;

        if (s[i] == '-')
        {
            sign = 0;
            i++;
        }
        else if (s[i] == '+')
            i++;

        long long int out = 0;
        while (i < len && s[i] >= '0' && s[i] <= '9')
        {
            out = out * 10;
            if (out <= INT_MIN || out >= INT_MAX)
                break;

            out = out + (s[i] - '0');
            i++;
        }

        if (sign == 0)
            out = -1 * out;

        if (out <= INT_MIN)
            return INT_MIN;
        else if (out >= INT_MAX)
            return INT_MAX;

        return out;
    }
};

int main()
{
    Solution find;
    cout << find.myAtoi("-67565") << endl;
}