#include <iostream>
#include <vector>
using namespace std;


vector<int> solution(vector<int> &vec, int K)
{
	if (vec.size() ==0 || K <= 0)
	return vec;

	for (int i=0 ; i < K  ; ++i)
	{
		int intTemp= vec.back();
		 for (auto it=vec.rbegin(); it != vec.rend() ; ++it )
		 {
		 	if (it !=vec.rend() - 1 ) // begin 
		 	*it= *(it + 1 );
			else
			*it = intTemp;
		 }
	}
	return vec;
}

int main()
{

vector<int>  testVec{ 3, 8, 9, 7, 6 };
//                   [0]          [4]
//             rend  begin        rbegin end


solution(testVec , 2);

for (auto& val : testVec)
   std::cout << val  << " "; 


  return 0;
}