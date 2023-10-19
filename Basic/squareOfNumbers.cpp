
#include <iostream>
using namespace std;

int main()
{
    // you are given N, followed by list of N numbers
    // Output : squares of N numbers

    int N;
    cin >> N;

    int no;
    while (N > 0)
    {
        cin >> no;
        cout << no * no << endl;
        N = N - 1;
    }

    return 0;
}

// creating an input file for the inputs