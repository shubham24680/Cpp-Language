#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

class Postfix
{
    int prec(char c)
    {
        switch (c)
        {
        case '^':
            return 3;
            break;
        case '*':
        case '/':
            return 2;
            break;
        case '+':
        case '-':
            return 1;
            break;
        default:
            return -1;
            break;
        }
    }

public:
    string convert(string s)
    {
        stack<char> stack;
        string result = "";
        int i;

        for (i = 0; i < s.length(); i++)
        {
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z') || ('0' <= s[i] && s[i] <= '9'))
                result += s[i];
            else if (s[i] == '(')
                stack.push(s[i]);
            else if (s[i] == ')')
            {
                while (stack.top() != '(')
                {
                    result += stack.top();
                    stack.pop();
                }
                stack.pop();
            }
            else
            {
                while (!stack.empty() && prec(s[i]) <= prec(stack.top()))
                {
                    result += stack.top();
                    stack.pop();
                }
                stack.push(s[i]);
            }
        }

        while (!stack.empty())
        {
            result += stack.top();
            stack.pop();
        }

        return result;
    }
};

int main(int argc, char const *argv[])
{
    cout << "Enter an infix string: ";
    string s;
    cin >> s;
    Postfix p;
    cout << "Postfix of the string is " << p.convert(s);
    getch();
    return 0;
}