#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &vec)
{
  int sum = ((vec.size())*(vec.size()+1)) / 2 ;
  
  long long actualsum=0; 
  for (auto it= vec.begin() ; it!= vec.end() ; ++it)
   actualsum += *it; 

return (vec.size() - (actualsum - sum) + 1);

}

// 4 
// 1 2 3 4        10
// 1 3 4 5     2  13
// 1 2 4 5     3  12
// 1 2 3 5     4  11

int main ()
{
 
 vector<int> MyVec {1,2,3,5,6,7,8};
  std::cout <<  solution(MyVec) << std::endl; 

    return 0;
}