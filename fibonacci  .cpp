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
 
int* fibonacciDynamic(int n)
{
  int *fibArray = (int*) malloc ((n+2)*sizeof(int)); 
  memset (fibArray , 0 , (n+2)*sizeof(int)) ; 
  fibArray[1] = 1; 
  for (int i= 2  ; i <  n + 1 ; ++i)
  {
    fibArray[i] = fibArray[i - 1] + fibArray[i - 2] ;
  }
 return fibArray; 
}

int main ()
{
int n = 9;
///   print all arraye 
int *returnedArray=fibonacciDynamic(n); 
for (int i=0 ; i <= n ; ++i)
printf("%d " , returnedArray[i] );


/// print the number 
printf("/////////\n");
printf("%d", fib(n));

return 0;
}