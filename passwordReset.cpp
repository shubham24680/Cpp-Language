#include <iostream>
#include <set>
#include <bits/stdc++.h>
using namespace std;

string findResultantString(string s)
{
    int i, len = s.length();
    int arr[26] = {0};
    set<int> container;
    for (i = 0; i < len; i++)
    {
        arr[s[i] - 'a']++;
        container.insert(s[i]);
    }

    int already = len / 2 - (len - container.size());
    int c = already;
    for (i = 25; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            arr[i] = 0;
            c--;
        }

        if (c == 0)
            break;
    }

    string result = "", store = "", ans = "";
    for (i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            if (arr[i] == 1)
                if (already-- > 0)
                    result += ('a' + i);
                else
                    store = ('a' + i);
            else
            {
                int count = arr[i] / 2;
                while (count-- > 0)
                    result += ('a' + i);
            }
        }
    }
    ans = result;
    reverse(result.begin(), result.end());
    ans += store;
    ans += result;
    return ans;
}

int main(int argc, char const *argv[])
{
    string s = "abbca";
    string result = findResultantString(s);
    cout << result << endl;
    return 0;
}