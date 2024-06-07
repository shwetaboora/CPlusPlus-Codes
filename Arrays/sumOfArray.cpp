#include <iostream>
using namespace std;

int sumArr(int arr[], int noOfElements)
{
    int sum = 0;
    for (int i = 0; i < noOfElements; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int noOfElements, arr[50];
    cout << "enter the no of elements you want in an array ";
    cin >> noOfElements;

    cout << "enter the elements of an array " << endl;
    for (int i = 0; i < noOfElements; i++)
    {
        cin >> arr[i];
    }

    cout << "sum of array " << sumArr(arr, noOfElements) << endl;
    return 0;
}