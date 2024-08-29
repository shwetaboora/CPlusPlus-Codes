#include <iostream>
#include <deque>
using namespace std;
// sliding window
int main()
{
    int n;
    int a[1000];
    int k;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> k;

    deque<int> q(k); // k is elements in the deque
    int i;
    // we have to process first k elements separtely
    for (i = 0; i < k; i++)
    {
        while (!q.empty() && a[i] > a[q.back()])
        { // we are checking that if no is greater or not if yes then push the index
            // and also we push the last index of the window so that if next window will have this as greatest
            q.pop_back();
        }
        q.push_back(i);
    }
    // process remaining elements

    for (; i < n; i++)
    {
        cout << a[q.front()] << " ";
        // 1. remove the elements which are not the part of the window(contraction)
        while (!q.empty() && (q.front() <= i - k))
        {
            q.pop_front();
        }

        //  2. remove the elements which are not useful and are in window
        while (!q.empty() && a[i] >= a[q.back()])
        {
            q.pop_back();
        }

        // 3. add the new elements (expansion)
        q.push_back(i);
    }

    cout << a[q.front()] << endl;

    return 0;
}