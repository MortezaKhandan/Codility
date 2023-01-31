#include <iostream>
#include <vector>
#include <stdio.h>
#include <stack>
#include <limits.h>
using namespace std;
//Kadane’s Algorithm
//https://www.enjoyalgorithms.com/blog/maximum-subarray-sum
// int solution(vector<int> &A)
// {
//     int intMaxSlice = INT_MIN;
//     int intMaxEnded = 0;
//     int len = A.size();
//     if (len < 2)
//         return 0;

//     for (int i = 1; i < len; ++i)
//     {
//         intMaxEnded = intMaxEnded + (A[i] - A[i - 1]);
//         intMaxSlice = Max(intMaxSlice, intMaxEnded);
//         intMaxEnded = Max(0, intMaxEnded);
//     }
//     intMaxSlice = Max(0, intMaxSlice);
//     return intMaxSlice;
// }

int Max(int A, int B)
{
    return A > B ? A : B;
}
int solution(vector<int> &X)
{
    int n = X.size();
    int maxsumSoFar = 0;
    int maxsumEndingHere = 0;
    for (int i = 1; i < n; ++i )
    {
        maxsumEndingHere = max(maxsumEndingHere + (X[i]-X[i-1]), (X[i]-X[i-1]));
        if (maxsumSoFar < maxsumEndingHere)
            maxsumSoFar = maxsumEndingHere;
    }
    return Max(0, maxsumSoFar);
}
int main()
{
    // 5, 4, 3, 2, 1  expected 0
    int a[] = {23171, 21011, 21123, 21366, 21013, 21367};

    // printf("%d", solution(a, sizeof(a) / sizeof(a[0])));
    std::vector<int> intVec = {23171, 21011, 21123, 21366, 21013, 21367};
    std::vector<int> intVec0 = {5, 4, 3, 2, 1};
    // printf("%d", solution_1(intVec));
    printf("%d", solution(intVec0));

    return 0;
}