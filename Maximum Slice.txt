
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stack>
#include <map>
#include <limits.h>
using namespace std;
//Kadane’s Algorithm
//https://www.enjoyalgorithms.com/blog/maximum-subarray-sum
int Max(int A, int B)
{
    return A > B ? A : B;
}
int solution(vector<int> &X)
{
    int n = X.size();
    int maxsumSoFar = X[0];
    int maxsumEndingHere = X[0];
    for (int i = 1; i < n; ++i)
    {
        maxsumEndingHere = max(maxsumEndingHere + X[i], X[i]);
        if (maxsumSoFar < maxsumEndingHere)
            maxsumSoFar = maxsumEndingHere;
    }
    return maxsumSoFar;
}
int solution_c(int X[], int n)
{
    int maxsumSoFar = X[0];
    int maxsumEndingHere = X[0];
    for (int i = 1; i < n; ++i)
    {
        maxsumEndingHere = max(maxsumEndingHere + X[i], X[i]);
        if (maxsumSoFar < maxsumEndingHere)
            maxsumSoFar = maxsumEndingHere;
    }
    return maxsumSoFar;
}

// int solution(vector<int> &A)
// {
//     int intMaxSlice = INT_MIN;
//     int intMaxEnded = 0;
//     int len = A.size();
//     for (int i = 0; i < len; ++i)
//     {
//         intMaxEnded = intMaxEnded + A[i];
//         intMaxSlice = Max(intMaxSlice, intMaxEnded);
//         intMaxEnded = Max(0, intMaxEnded);
//     }
//     return intMaxSlice;
// }

int main()
{
    // -2, 1  expected  1
    // -10    expected -10
    int a[] = {5, -7, 3, 5, -2, 4, -1, -1};
    int a1[] = {-1, -1, 1};
    // printf("%d", solution(a, sizeof(a) / sizeof(a[0])));
    std::vector<int> intVec = {5, -7, 3, 5, -2, 4, -1, -1};
    std::vector<int> intVec1 = {-1, -1, 1};
    printf("%d", solution(intVec1));
    printf("\n");
    printf("%d", solution_c(a1, sizeof(a1) / sizeof(a1[0])));
    printf("\n");
    return 0;
}
