#include <iostream>
#include <stack>
using namespace std;

bool isValid(char *s)
{
    stack<char> stk;
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        if (ch == '(')
        {
            stk.push(ch);
        }
        else if (ch == ')')
        {
            if (stk.empty() || stk.top() != '(')
            {
                return false;
            }
            stk.pop();
        }
    }
    // return stk.empty()?true:false;
    return stk.empty();
}

int main()
{
    char s[100] = "((a+b)+(C-d+f))";
    if (isValid(s))
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }

    return 0;
}