#include <iostream>
#include <vector>
#include <stdbool.h>

#include <stdio.h>


using namespace std;

struct Results {
  int * C;
  int L; // Length of the array
};

struct Results solution(int N, int A[], int M) {
 struct Results result;
    
 int *intCounters=(int*)malloc(N*sizeof(int));
 memset(intCounters, 0 , N*sizeof(int));

    result.C = intCounters;
    result.L = N;
    
  int intMax=0; 
  int intMaxCountersValue =0 ;
  for (int i=0 ; i< M ; ++i)
  {
     if (A[i] > 0 &&  A[i] <= N )
     {
        if(intCounters[A[i]-1] < intMaxCountersValue)
          intCounters[A[i]-1] = intMaxCountersValue;

        intCounters[A[i]-1] += 1;
        if (intCounters[A[i]-1] > intMax )
          intMax = intCounters[A[i]-1];        // save the maximum value 

     }
     else
     {
      // sett all element to maximum 
      intMaxCountersValue = intMax;
     }
  }

  for (int t = 0 ; t < result.L ; ++t)
  {
    if (result.C[t] < intMaxCountersValue ) 
     result.C[t] = intMaxCountersValue;
  }
   
    return result;
}

int main() {
     int array[]= {3,4,4,6,1,4,4};
     struct Results tetst=  solution(5, array , sizeof(array) / sizeof(array[0])) ;

     for(int t=0 ; t< tetst.L   ; ++t)
     {
      std::cout << tetst.C[t] << std::endl;
     }
   return 0;
}