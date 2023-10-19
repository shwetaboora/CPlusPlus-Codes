#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // give a no N
    // square root of  a no without using predefined function
    int N;
    int P;
    cin >> N >> P;
    float ans = 0;
    float inc = 1.0;

    for (int times = 0; times <= P; times++)
    {
        // finalise the correct digit for the current place
        while (ans * ans <= N)
        {
            ans = ans + inc;
        }
        ans = ans - inc;
        // update inc for the next position
        inc = inc / 10;
    }
    cout << ans << endl;

    return 0;
}
