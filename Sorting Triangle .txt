#include <iostream>
#include <vector>
#include <stdbool.h>
#include <stdio.h>
using namespace std;


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}

int solution(int A[], int N)
{
  if (N<3)
  return 0; 
 qsort(A,N, sizeof(int), cmpfunc);
 for (int i= 0 ; i< N-2; ++i)
 {
  if (A[i] < (A[i+1] + A[i+2])  && A[i+1] < (A[i] + A[i+2]) && A[i+2] < (A[i+1] + A[i]) )
   return 1;
 }

 return 0;
}



   int main() {

   int A[]= {10,2,5,1,8,20};
   printf("%d " , solution(A, sizeof(A)/ sizeof(A[0])));
    
   return 0;
   }