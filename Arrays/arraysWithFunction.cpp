#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    cout << "printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Done!!" << endl;
}

int main()
{
    // declaration
    int num[15];
    cout << "value at index 6 " << num[5] << endl;

    // initialization on an array
    int first[10] = {1, 2, 3};

    // update the single index of an array
    first[8] = 100;

    printArray(first, 10);

    // initializing whole array with 0
    int third[10] = {0};
    printArray(third, 10);

    // initializing array with 1
    int second[20];
    fill_n(second, 10, 1);
    printArray(second, 20);

    // finding the total size of the array
    int sizeOfArray = sizeof(second);
    cout << "size of Second array is " << sizeOfArray << endl;

    // finding the total length of the array
    int lengthOfArray = sizeof(second) / sizeof(int);
    cout << "length of Second array is " << lengthOfArray << endl;

    return 0;
}