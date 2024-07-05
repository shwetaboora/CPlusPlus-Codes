#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    return n2 == 0 ? n1 : gcd(n2, n1 % n2);
}
int lcm(int n1, int n2)
{
    int least = (n1 * n2) / gcd(n1, n2);
    return least;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    cout << gcd(n1, n2);
    return 0;
}