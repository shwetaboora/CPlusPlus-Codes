#include <iostream>

#include <stack>
using namespace std;
// overall complexity would be O(N) - because each element is pushed once into the stack and it is popped once out of the stack
void stockSpan(int prices[], int n, int span[])
{
    stack<int> s; // indeces of the days
    s.push(0);
    span[0] = 1;

    // loop for the rest of the days ->O(N)
    for (int i = 1; i <= n - 1; i++)
    {
        int currPrice = prices[i];
        // find topmost element that are higher than the price
        while (!s.empty() && prices[s.top()] <= currPrice)
        {
            s.pop();
        }
        // element at the top that is going to be the next larger element that is left
        if (!s.empty())
        {
            int prevHighest = s.top();
            span[i] = i - prevHighest;
        }

        else
        {
            // no of days till now
            span[i] = i + 1;
        }
        // push this element into the stack
        s.push(i);
    }
}
int main()
{
    int prices[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(prices) / sizeof(int);
    int span[100] = {0};

    stockSpan(prices, n, span);
    for (int i = 0; i < n; i++)
    {
        cout << span[i] << " ";
    }
    cout << endl;

    return 0;
}