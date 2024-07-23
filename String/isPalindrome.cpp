// Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

// Input Format
// Enter a number N , add N more numbers

// Constraints
// None

// Output Format
// Display the Boolean result

// Sample Input
// 4
// 1
// 2
// 2
// 1
// Sample Output
// true

#include <iostream>
using namespace std;

bool palindrome(int arr[], int s, int e)
{
    if (s >= e)
    {
        return true;
    }
    if (arr[s] != arr[e])
    {
        return false;
    }

    return palindrome(arr, s + 1, e - 1);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool result = palindrome(arr, 0, n - 1);

    if (result)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}