#include <iostream>
#include <vector>
#include<stdio.h>

using namespace std;

int fib(int n)
{
if (n <= 1)
    return n;

return fib(n-1) + fib(n-2);
}
int fibUPtoNumber(int n)
{
    int t1 = 0, t2 = 1, nextTerm = 0 ; 
    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
	return t2 ; 	
}

int main ()
{
int n = 9;
fibUPtoNumber(100);

printf("%d", fibUPtoNumber(100)); 

/// print the number 
printf("/////////\n");
printf("%d", fib(n));

return 0;
}