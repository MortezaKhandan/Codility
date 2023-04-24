#include <iostream>
#include <vector>
#include <stdbool.h>

#include <stdio.h>


using namespace std;

int solution(int X, int A[], int N)
{
 int* array = (int*)malloc((X+1)*sizeof(int));  //[ 0 , 1 , 1 , 1 ] for 3 
 int intSum=0;
 memset(array , 0 , (X+1)*sizeof(int));

   for (int i=0 ; i< N ; ++i)
    {
     if ( array[A[i]] == 1)
      continue;

       array[A[i]] = 1;
       intSum += 1;
       if (intSum == X)
       {
         free(array); 
         return i;      
       }
      
    } 
   free(array); 
   return -1; 
}
int main() {

 //int Array[]= {1, 3, 1, 3, 2, 1, 3}; // expected 4 
 int Array[]= {1}; // expected 1
 std::cout << solution(1, Array, sizeof(Array)/ sizeof(Array[0])) << std::endl; 

   return 0;
}