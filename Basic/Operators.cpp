#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 9;
    // 1. assignment operator assigns values (=)
    cout << "Assignment operators" << endl;
    cout << " int a = 1 " << endl;

    // compound assignment (+=)(-=)(*=)(%=)(/=)(<<=)(>>=)
    cout << endl;
    cout << "compound assignment operators" << endl;
    a *= b;
    cout << "a*=b = " << a << endl;
    a += b;
    cout << "a+=b = " << a << endl;
    a -= b;
    cout << "a-=b = " << a << endl;
    a /= b;
    cout << "a/=b = " << a << endl;
    a %= b;
    cout << "a%=b = " << a << endl;
    a <<= b;
    cout << "a<<=b = " << a << endl;
    a >>= b;
    cout << "a>>=b = " << a << endl;

    // 2. bitwise operator that operates on bits.
    // bitwise operators are of 4 types
    // a. bitwise AND (&)
    // b. bitwise OR (|)
    // c. bitwise XOR (^)
    // d. bitwise NOT (~)
    cout << endl;
    cout << "Bitwise operators" << endl;
    cout << "bitwise AND (&) a&b = " << (a & b) << endl;
    cout << "bitwise AND (|) a|b = " << (a | b) << endl;
    cout << "bitwise AND (^) a^b = " << (a ^ b) << endl;
    cout << "bitwise AND (~) ~b = " << (~b) << endl;

    // 3. shift operators
    // shift operators are of 2 types
    // a. left shift (<<)
    // b. right shift (>>)
    cout << endl;
    cout << "Shift operators" << endl;
    cout << "left shift (a<<b) = " << (a << b) << endl;
    cout << "right shift (a>>b) = " << (a >> b) << endl;

    // 4. Unary operator
    // they operate on a single operand
    // Address of operator (&)
    // Dereferencing operator (*)
    // new operator
    // delete operator
    // logical not (~)
    // unary minus (-)
    // unary plus (+)
    cout << endl;
    cout << "Unary operators" << endl;
    cout << "address  (&a) = " << (&a) << endl;
    // cout << "dereferencing (*a) = " << (*a) << endl;
    cout << "logical not (~a) = " << (~a) << endl;
    cout << "unary minus (-a) = " << (-a) << endl;
    cout << "unary plus (+a) = " << (+a) << endl;

    // 5. Arithmetic operators
    // multiplication (*)
    // plus (+)
    // minus(-)
    // division (/)
    // modulus (%)
    cout << endl;
    cout << "Arithmetic operators" << endl;
    cout << "multiplication a*b = " << a * b << endl;
    cout << "addition a+b = " << a + b << endl;
    cout << "substraction a-b = " << a - b << endl;
    cout << "division a/b = " << a / b << endl;
    cout << "modulus a%b = " << a % b << endl;

    // 6. Ternary Operators (?:)
    // condition ? statement(true) : statement(false)
    cout << endl;
    cout << "Ternary operators" << endl;
    cout << "a>5 ? true : false = " << (a > 5 ? true : false) << endl;

    // 7. comma operator (,)
    // int a,b,c;
    cout << endl;
    cout << "Comma operators" << endl;
    cout << " int a,b,c; " << endl;

    // 8. Relational/comparision Operators
    // less than (<)
    // less than equal to (<=)
    // more than (>)
    // more than equal to (>=)
    // check or double equal to (==)
    // not equal to (!=)
    cout << endl;
    cout << "relational operators" << endl;

    bool first = (a == b);
    cout << " (a == b) = " << first << endl;

    bool second = (a > b);
    cout << " (a > b) = " << second << endl;

    bool third = (a < b);
    cout << " (a < b) = " << third << endl;

    bool fourth = (a >= b);
    cout << " (a >= b) = " << fourth << endl;

    bool fifth = (a <= b);
    cout << " (a <= b) = " << fifth << endl;

    bool sixth = (a != b);
    cout << " (a != b) = " << sixth << endl;

    // 9. logical operators
    // used to combine different expressions
    // And (&&)
    // or (||)
    cout << endl;
    cout << "logical operators" << endl;
    cout << "And (a < 5 &&  a < 10) = " << (a = 2 && a > 3) << endl;
    cout << "Or (a < 5 ||  a < 10) = " << (a < 2 || a > 3) << endl;

    // 10. increment decrement operators
    // post increment (x++)
    // post decrement (x--)
    // pre increment (++x)
    // pre decrement (--x)
    cout << endl;
    cout << "increment decrement  operators" << endl;
    int c = 5;
    cout << "post increment c++ = " << c++ << endl;
    cout << "post decrement c-- = " << c-- << endl;
    cout << "pre increment ++c = " << ++c << endl;
    cout << "pre decrement --c = " << --c << endl;

    return 0;
}
