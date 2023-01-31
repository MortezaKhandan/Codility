#include <iostream>
#include <vector>
#include <stdbool.h>
#include <stdio.h>
using namespace std;

int * PrefixSum(int A[] , int M)
{
int *Array= (int*)malloc (M*sizeof(int));
memset(Array , 0 , (M+1)*sizeof(int) );

for (int i=1 ; i <= M ; ++i)
{
 Array[i] = Array[i-1]+ A[i-1];
}
return Array; 
};

int count_total(int A[] , int x ,int  y )
{
return (A[y+1]-A[x]);
};

int main() {

   int  A[]= {2,5,8,6}; 
   int *PrefixSumArray= PrefixSum(A, sizeof(A)/ sizeof(A[0])) ;
   printf( "sum= %d \n" , PrefixSumArray[sizeof(A)/ sizeof(A[0])]);
   printf ("End");


   printf( "sum= %d \n" , count_total (PrefixSumArray , 0 , 3));
   printf ("End");
   return 0;
}