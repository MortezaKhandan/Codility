#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &vec)
{
    if (vec.size()==1)
     return vec.back();


    sort(vec.begin() , vec.end());

for (auto it = vec.begin() ; it != vec.end() ; ++it)
{
    if (*(it) == *(it+1))
    {
      ++it ; 

      if (it + 2 == vec.end())
      return vec.back();
    }
    else if (*(it) != *(it+1))
      return *it;
}
return 0;
}

int main ()
{
  vector <int > myvec{9};
    std::cout << solution(myvec) << std::endl;
    return 0;
}