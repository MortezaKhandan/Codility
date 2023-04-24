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

int count_total(int AB[] , int x ,int  y )
{
  return (AB[y+1]-AB[x]);
}

int solution(int A[], int N)
{
   int *PrefixS= PrefixSum(A , N );
   int result=0; 
   if (count_total (PrefixS , 0 , N-1) >  1000000000) 
     return -1;

     for (int i = 0 ; i < N ; ++i)
     {
      if (A[i] == 0 )
      result += (count_total (PrefixS , i , N-1)); 
       if (result > 1000000000 )
        return -1; 
     }

return result ; 
}

   int main() {

   int A[]= {0,1,0,1,1};
   printf("%d" , solution(A, 5));

   return 0;
}