// for insertion in queue
// front is at 0 rear is at n-1
// Push ->  (rear+1)%n
// after this above statement both front and rear will be at same position
// and then next element will be pushed at rear+1 position
// and it will continue like this
// and also we have to update the value as rear =  (rear+1)%n if queue is not full
// and then a[rear] = datavalue; we want to insert
// Complexity of these operations is O(1)

// Pop -> if queue is non empty then Front = (front+1)%n
// for adding after last position and we want to add at the first position which is blank so we will do rear +1 so that rear will come at 0th position
// while currentsize == n then we can return that queue is full
// while currentsize == 0 then we can return that queue is empty

// Queue{
//     push()
//     pop()
//     front()
//     empty()
//     full()
// }

#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int f, r, cs, ms;

public:
    Queue(int ds = 5)
    {
        arr = new int[ds];
        cs = 0;
        ms = ds;
        f = 0;
        r = ms - 1;
    }

    bool full()
    {
        return cs == ms;
    }
    bool empty()
    {
        return cs == 0;
    }

    void push(int data)
    {
        if (!full())
        {
            r = (r + 1) % ms;
            arr[r] = data;
            cs++;
        }
    }

    int front()
    {
        return arr[f];
    }
    void pop()
    {
        if (!empty())
        {
            f = (f + 1) % ms;
            cs--;
        }
    }

    ~Queue()
    {
        if (arr != NULL)
        {
            delete[] arr;
            arr = NULL;
        }
    }
};

int main()
{
    Queue q;

    for (int i = 1; i <= 6; i++)
    {
        q.push(i);
    }

    q.pop();
    q.pop();
    q.push(7);

    while (!q.empty())
    {

        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}