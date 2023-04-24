#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector <int> solution(vector<int> &vec)
{
 vector<int> Myvec;
 Myvec.resize(vec.size() , 0);
 for (auto it = vec.begin() ; it!= vec.end() ; ++it) 
      ++(Myvec.at(*it)) ;

 //vec=Myvec;
 return Myvec;
}

int main()
{

vector<int>  testVec{ 2, 3 , 2 , 3 , 4};
//                   [0]          [4]
//             rend  begin        rbegin end
 auto outvec=solution(testVec) ;

 for (auto val:outvec )
  std::cout <<val << " " ;

  return 0;
}