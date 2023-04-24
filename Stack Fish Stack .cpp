#include <iostream>
#include <cstdlib>
#include <deque>
#include <stack>
#include <queue>
#include <stddef.h>
#include <vector>
using namespace std;

int solution(vector<int> &A, vector<int> &B)
 {
    int currentFish=0 ;

    stack<int> intStackA;
    stack<int> intStackB;

    intStackA.push(A.at(A.size()-1)); // put the last value in stack
    intStackB.push(B.at(B.size()-1)) ;
    for (int i = A.size()-2 ; i >= 0 ; --i )
    {
      currentFish=A.at(i);
      if (B.at(i) == 0 || (B.at(i) == 1 && intStackB.top() == 1 ) ) 
      {
        intStackA.push(A.at(i));
        intStackB.push(B.at(i));
      }
      else
      {
        while (intStackA.size() && intStackB.top() == 0 && currentFish >intStackA.top())
        {
           intStackA.pop();
           intStackB.pop();
        }

        if (intStackA.size()  == 0 || intStackB.top() == 1  )
          {
            intStackA.push(A.at(i));
            intStackB.push(B.at(i));
          }

      }

    }

    return intStackA.size();
 }
int main()
{
  vector<int> Avec= {4 , 3};
  vector<int> Bvec= {1 , 0} ; 

  cout << solution(Avec,Bvec) << endl;
  return 0;
}