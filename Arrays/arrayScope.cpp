#include <iostream>
using namespace std;

void update(int arr[], int size)
{

    cout << "inside the funtion" << endl;
    // updating the array at 0th index
    arr[0] = 23;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "going to main function" << endl;
}
// so in case of array we give the base address of the array to the function so the main function array will also be updated as the update function array
// in variable the copy is created but not in array
int main()
{

    int arr[4] = {3, 7, 9, 2};
    update(arr, 4);

    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}