#include <iostream>
using namespace std;
// 1st approach is brute force where three loops nested loopes are used
// BigO(n^6)
// for (li = 0 -- > n - 1)--extracts all possible top left i
//     {
//         for (lj = 0 -- > n - 1)--extracts all possible top left j
//             {
//                 for (bi = li + 1 -- > n - 1)--extracts all possible bottom right i
//                     {
//                         for (bj = lj + 1 -- > n - 1)--extracts all possible bottom right j
//                             {
//                                 for (i = li-- > bi)--sum of current submatrix
//                                     {
//                                         for (j = lj-- > bj)--sum of current submatrix
//                                             {
//                                                 sum = arr(i, j);
//                                             }}}}}}

// (0,0),       ,     , ,(i-1,y), ,
//      ,       ,(i,j), ,       , ,
//      ,       ,     , ,       , ,
//      ,(x,j-1),     , ,  (x,y), ,
//      ,       ,     , ,       , ,

// 2nd approach  is where we do prefix sum by column and row wise direction
// BigO(n^4)
// v -> value at x,y ->sum(0,0)till(x,y)
// p -> value at i-1,y ->sum(0,0)till(i-1,y)
// q -> value at x,j-1 ->sum(0,0)till(x,j-1)
// r -> value at i-1,j-1 ->sum(0,0)till(i-1,j-1)
// v-p-q+r  -->sum of all elements in the submatrix

// for (li = 0 -- > n - 1)--extracts all possible top left i
//     {
//         for (lj = 0 -- > n - 1)--extracts all possible top left j
//             {
//                 for (bi = li + 1 -- > n - 1)--extracts all possible bottom right i
//                     {
//                         for (bj = lj + 1 -- > n - 1)--extracts all possible bottom right j
//                             as we get prefix sum matrix from above used loops
//                             sum += (pre(Bi,Bj)-pre(Li-1,Bj)-pre(Bi,Lj-1)+pre(Li-1,Lj-1))

// }}}}

// 3rd approach
// BigO(n^2)
// for i = 0 -> n-1
//  for j = 0 -> m-1
//      sum += arr[i][j]     * [(i+1)(j+1)*(n-i)(m-j)]
//             value of cell   no. of submatrices cell is a part of
//                contribution of (i,j) in sum

int sumOfSubmatrix(int **arr, int n, int m)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int tl = (i + 1) * (j + 1);
            int br = (n - i) * (m - j);
            sum += (tl * br) * arr[i][j];
        }
    }
    return sum;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << sumOfSubmatrix(arr, n, m) << endl;

    return 0;
}