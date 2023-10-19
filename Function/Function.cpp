#include <iostream>
using namespace std;
/*
    functions
    // till now we are writing the code in one function called main() function
    // when writing a code we can create more than one function
    // why we need a function
    it allows us to break our code into smaller modules
    we can reuse them
    better organization
    increases readability of code
    // function is a smaller module with a desired functionality
    */

void sayHello()

// void is the return type and sayHello is function name and in brackets we can pass some arguments
// void doesnot return anything to a main function
{
    cout << "hello everyone" << endl;
}

int factorial(int n) // function declaration
// int means the value we are going to return will be an integer
// and int n in brackets is argument to the function we can have more than one arguments
{
    int ans = 1; // function definition
    for (int i = 2; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main() // boss function can call any other function
{
    cout << "before function" << endl;
    sayHello(); // function call / innvocation
    cout << "after function" << endl;

    // part 2
    int n;
    cout << "enter the number for factorial";
    cin >> n;
    factorial(n); // just to call the function and compute the n nothing will be printed in output untill u do cout

    cout << factorial(n) << endl;

    return 0; // means showcasing the success that code has terminated successfully
}

// compilation starts from line 1 to last
// execution starts from the main function