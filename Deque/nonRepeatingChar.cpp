#include <iostream>
#include <deque>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "abcdefckzyxz";
    int n = strlen(a);
    int curlen = 1;
    int maxlen = 1;

    int visited[256];
    for (int i = 0; i < 256; i++)
    {
        visited[i] = -1;
    }

    visited[a[0]] = 0;

    for (int i = 1; i < n; i++)
    {
        int lastocc = visited[a[i]];
        // expansion
        if (lastocc == -1 || (i - curlen) > lastocc)
        {
            curlen++;
            // maxlen = max(curlen, maxlen);
        }
        // expansion + contraction
        else
        {
            if (curlen > maxlen)
            {
                maxlen = curlen;
            }
            curlen = i - lastocc;
        }
        visited[a[i]] = i;
    }
    if (curlen > maxlen)
    {
        maxlen = curlen;
    }
    cout << maxlen << endl;

    return 0;
}

// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         int i = 0, j = 0, ans = 1;
//         int n = s.length();

//         if (s.empty())
//         {
//             return 0;
//         }
//         while (j < n)
//         {
//             for (int k = i; k < j; k++)
//             {
//                 if (s[k] == s[j])
//                 {
//                     i = k + 1;
//                     break;
//                 }
//             }
//             ans = max(ans, j - i + 1);
//             j++;
//         }
//         return ans;
//     }
// };