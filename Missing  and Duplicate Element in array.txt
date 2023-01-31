#include <iostream>
#include <vector>
#include <stdbool.h>

#include <stdio.h>


using namespace std;
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &vec)
{
  int sum = ((vec.size())*(vec.size()+1)) / 2 ;
  
  long long actualsum=0; 
  for (auto it= vec.begin() ; it!= vec.end() ; ++it)
   actualsum += *it; 

 // return (vec.size() - (actualsum - sum) + 1);  // retrunt missing 
 return (vec.size() - (sum - actualsum ));  // retrunt duplicat 

}
// finding missing 
// 4 
// 1 2 3 4        10
// 1 3 4 5     2  13
// 1 2 4 5     3  12
// 1 2 3 5     4  11

// findin duplicate 
// 5 
// 1 2 3 4 5   15 
// 1 2 2 3 4   12    15 - 12 = 3 ---> 5 -3 = 2 
// 1 2 3 3 4   13    15 - 13 = 2 ---> 5 -2 = 3 
// 1 2 3 4 4   14 

int main ()
{
 
 // vector<int> MyVec {1,3,4,5}; //  sample missing 
  vector<int> MyVec {1,2,2,3,4}; // sample duplicate 
  std::cout <<  solution(MyVec) << std::endl; 

    return 0;
}