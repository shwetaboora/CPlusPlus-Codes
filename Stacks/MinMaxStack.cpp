//  Min Max Stack
// design a stack class that supports following operations

// - Push(),Pop()
// - Top()
// - GetMin();
// - GetMax();

#include <iostream>
#include <vector>
using namespace std;

class MinMaxStack
{
    vector<int> stack;
    vector<int> minStack;
    vector<int> maxStack;

public:
    int top()
    {
        return stack[stack.size() - 1];
    }
    void push(int data)
    {
        int curMin = data;
        int curMax = data;

        if (minStack.size())
        {
            curMin = min(minStack[minStack.size() - 1], data);
            curMax = max(maxStack[maxStack.size() - 1], data);
        }

        minStack.push_back(curMin);
        maxStack.push_back(curMax);
        stack.push_back(data);
    }

    int getMin()
    {
        return minStack[minStack.size() - 1];
    }
    int getMax()
    {
        return maxStack[maxStack.size() - 1];
    }
    bool empty()
    {
        return stack.size() == 0;
    }

    void pop()
    {
        minStack.pop_back();

        maxStack.pop_back();
        stack.pop_back();
    }
};

int main()
{

    MinMaxStack s;
    s.push(1);
    s.push(5);
    s.push(3);
    s.push(8);

    cout << s.getMax() << endl;
    s.pop();
    cout << s.getMin() << endl;

    cout << s.getMax() << endl;
    s.pop();

    s.pop();
    cout << s.top() << endl;
    cout << s.getMax() << endl;
    return 0;
}