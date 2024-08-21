// largest area under histogram
// 3 ways to solve
// 1. brute force O(N^2)
// 2. divide and conquer O(NlogN)
// 3. stack based O(N) Using in this program

// for every bar  1. push into stack once 2. pop it once - (Area of the region is considering the current bar as the minimum height bar)