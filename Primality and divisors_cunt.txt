
#include <iostream>
#include <vector>
#include <stdio.h>
#include <stack>
#include <map>
#include <math.h>
#include <limits.h>

int Min(int A, int B)
{
    return A < B ? A : B;
}

int ح۹(int n)
{
    int i = 1;
    int result = 0;
    double sqr = sqrt(n);
    // while (i * i < n)
    while (i < sqr)
    {
        if (n % i == 0)
            result += 2;
        ++i;
    }
    // if (i * i == n)
    if (i == sqr)
        ++result;
    return result;
}

bool Primality_test(int n)
{
    if (n < 2)
        return false;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int MinPerimeterRectangle(int n)
{
    int i = 1;
    int result = 0;
    int min_perimeter = INT_MAX;
    double sqr = sqrt(n);
    // while (i * i < n)
    while (i < sqr)
    {
        if (n % i == 0)
            min_perimeter = Min(min_perimeter, (2 * (i + (n / i)))); // 1 2 3 5 6 10 15 30 for area=30
        ++i;
    }
    // if (i * i == n)
    if (i == sqr)
        min_perimeter = 2 * (i + i);

    return min_perimeter;
}

int Primality_Reverse_Coin(int n)
{
    int result = 0;
    int *coin = new int[n + 1]{0};
    for (int i = 1; i < n + 1; ++i)
    {
        int k = i;
        while (k <= n)
        {
            coin[k] = (coin[k] + 1) % 2;
            k += i;
        }
        result += coin[i];
    }
    return result;
}

int fPrimality_Reverse_Coin(int n)
{
    int *coin = (int *)malloc((n + 1) * sizeof(int));
    memset(coin, 0, (n + 1) * sizeof(int));
    int k = 0;
    int result = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int k = i; k <= n; k += i)
            coin[k] = (coin[k] + 1) % 2; // toogle between 0 and 1

        result += coin[i];
    }

    return result;
}
int main()
{
    printf("%d", MinPerimeterRectangle(30));
    printf("\n");
    printf("%d", Primality_Reverse_Coin(10));
    printf("%d", fPrimality_Reverse_Coin(10));
    return 1;
}