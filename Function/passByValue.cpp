#include <iostream>
using namespace std;

//  pass by value is just creating copy of a no in function
void dummy(int n) // copy of n is created in this function
{
    n++; // copied n is updated
    cout << "n is : " << n << endl;
}
int main()
{
    int n; // original n
    cout << "enter n: ";
    cin >> n;
    dummy(n); // original n sent and copy is created in the function sent

    cout << "number n is : " << n << endl; // original n only
    return 0;
}