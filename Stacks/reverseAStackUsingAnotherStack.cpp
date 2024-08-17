#include <iostream>
#include <stack>
using namespace std;

void transfer(stack<int> &s, stack<int> &s1, int n)
{
    for (int i = 0; i < n; i++)
    {
        s1.push(s.top());
        s.pop();
    }
}

void reverseStack(stack<int> &s)
{
    // helper stack s1
    stack<int> s1;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        // pick the element at top and insert it at the bottom
        int x = s.top();
        s.pop();

        // transfer n-1-i elements from stack s to s1
        transfer(s, s1, n - i - 1);

        // insert the element x in s
        s.push(x);
        // transfer n-1-i elements from stack s1 to s
        transfer(s1, s, n - i - 1);
    }
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}