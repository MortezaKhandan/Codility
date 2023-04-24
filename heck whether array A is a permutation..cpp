#include <iostream>
#include <vector>
#include <stdbool.h>

#include <stdio.h>


using namespace std;

int solution( int A[], int N)
{
 int* array = (int*)malloc((N+1)*sizeof(int));  
 int intSum=0;
 memset(array , 0 , (N+1)*sizeof(int));

   for (int i=0 ; i< N ; ++i)
    {

     if ((A[i] > N) || ( array[A[i]] == 1))
      return 0;

       array[A[i]] = 1;
       intSum += 1;
       if (intSum == N)
       {
         free(array); 
         return 1;      
       }
      
    } 
   free(array); 
   return 0; 
}
int main() {

// Example test:   [4, 1, 3, 2]
// WRONG ANSWER (got 3 expected 1)

// Example test:   [4, 1, 3]
// WRONG ANSWER (got 2 expected 0)

 int Array[]= {4, 1, 3}; // expected 4 
 //int Array[]= {1}; // expected 1
 //std::cout << solution(Array, sizeof(Array)/ sizeof(Array[0])) << std::endl; 
 std::cout << solution(Array, 4) << std::endl; 

   return 0;
}