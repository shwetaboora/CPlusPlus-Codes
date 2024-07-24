
// exercise 1
for (i = 0; i <= n - 1; i++)
{
    for (j = i; j <= k; j++)
    {
        // constant no.of operations
        // k+(k-1)+...0 + n-1-k
        // K^2 + N
        // O(k^2 + N)
    }
}

// exercise 2
for (i = 0; i <= n - 1; i++)
{
    for (j = i + 1; j <= n; j++)
    {
        // constant no.of operations
        // n + (n-1) + (n-2)....1
        // O(N^2)
    }
}

// exercise 3
for (i = 0; i <= n - 1;)
{
    for (j = 0; j < k; j++)
    {
        // constant no.of operations
        // outer loop will run (N/K)time inner loop will run (K)time
        // so k will be cut and complexity will be
        // O(N)
    }
    i = i + j / k;
}