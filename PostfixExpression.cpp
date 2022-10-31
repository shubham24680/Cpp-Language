#include <iostream>
#include <conio.h>
#include <stack>
using namespace std;

class PostfixExpression
{
public:
    string convert(string s)
    {
        stack<string> st;

        for (int i = 0; i < s.length(); i++)
        {
            if (('a' <= s[i] && s[i] <= 'z') || ('A' <= s[i] && s[i] <= 'Z'))
            {
                string op(1, s[i]);
                st.push(op);
            }
            else
            {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                st.push("(" + op2 + s[i] + op1 + ")");
            }
        }

        return st.top();
    }
};

int main(int argc, char const *argv[])
{
    cout << "Enter your postfix expression: ";
    string s;
    cin >> s;
    PostfixExpression p;
    cout << p.convert(s);
    getch();
    return 0;
}
