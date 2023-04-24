#include <iostream>
#include <cstdlib>
#include <deque>
#include <stack>
#include <stddef.h>
using namespace std;


int solution(string &S)
{
	stack <char> charStack;

        if (S[0] == '}' || S[0] ==  ')' || S[0] == ']')
		return 0;

        for (int i= 0 ; i<S.size() ; ++i)
		{
			if (S[i] == '{' || S[i] ==  '(' || S[i] == '[')
			 {
				charStack.push(S[i]);
			 }
			  else 
			 {
                 if (S[i] == (charStack.top() +1)   || S[i] == (charStack.top() +2)  ) // }  )  ]
				  {
				    charStack.pop();
				  }
				   else
				 return 0;
			 }
		}
		if (charStack.size() != 0 )
		return 0;

     
return 1;  
}

int main()
{
string   S1 = "{[()()]}";

string   S2 = "([)()]";

std::cout << solution(S1) << std::endl; 
std::cout << solution(S2) << std::endl; 

}
