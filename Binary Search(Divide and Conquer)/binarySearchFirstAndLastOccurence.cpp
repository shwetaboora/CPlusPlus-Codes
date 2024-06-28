#include <iostream>
using namespace std;

int first_occurence(int a[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;
    // update in a direction that ans values gets lower and lower

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int last_occurence(int a[], int n, int key)
{

    int s = 0;
    int e = n - 1;
    int ans = -1;
    // update in a direction that ans values gets lower and lower

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n, key;
    cout << "enter no of elements you want in array: ";
    int a[] = {1, 2, 3, 4, 4, 4, 4, 6, 8, 10};
    n = sizeof(a) / sizeof(int);

    cout << "enter the element you want to search: ";
    cin >> key;

    cout << first_occurence(a, n, key) << endl;
    cout << last_occurence(a, n, key) << endl;

    return 0;
}