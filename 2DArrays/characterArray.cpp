#include <iostream>
using namespace std;

int main()
{

    int b[] = {1, 2, 3};
    // in int array we get the starting address of the array
    // this is the default behaviour of the array
    cout << b << endl;
    // while inputing an integer array we have to use loop

    char a[] = {'a', 'b', 'c', '\0'};
    // in char array we get the contents1 of the array as output ]. unless we find a null'\0' it prints the garbage value after the contents
    // thats why we have to put '\0' null in the end of the char array
    // this is because of operator overloading
    // when we use this << with char array it is an special case
    // this is the special behaviour of the array
    cout << a << endl;
    // while inputing char array we can directly use cin and cout statements
    char s[10];
    cin >> s;
    cout << s << endl;

    char s1[] = {'h', 'e', 'l', 'l', 'o'};
    char s2[] = "hello";                     // another way of initializing char array
    cout << s1 << " " << sizeof(s1) << endl; // doesnt initialized with null at the end so gets the garbage value and also size is 5
    cout << s2 << " " << sizeof(s2) << endl; // automatically sets null at the end so size is 6 and also didnt get any garbage value

    char s3[10] = "hello"; // another way initialised with size

    return 0;
}