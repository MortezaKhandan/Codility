#include <iostream>
#include <vector>
//////////////
// this method will print all the 32 bits of a number
void decimalToBinary(int num) 
{
  std::vector<unsigned short> BinaryVec;
  BinaryVec.reserve(64);

    int intGapCount=0;
    int intLastGap=0;
    bool isStarted=false;

	do 
	{
	    if (num%2)
		BinaryVec.push_back(1);//std::cout << "1" ;
		else
		BinaryVec.push_back(0);//std::cout << "0";

	} while ( num /= 2 )  ;
	
	for (auto it= BinaryVec.rbegin() ; it !=BinaryVec.rend() ; ++it  )
	{

	  if (*it == 1 &&  isStarted== false)
	  {
         intGapCount=0;
         isStarted=true;
	  }
	  else if (*it == 1 &&  isStarted == true)
	  {
		intLastGap = intLastGap > intGapCount ? intLastGap : intGapCount;
		intGapCount= 0;
	  }

	  if (*it == 0 && isStarted == true)
	     ++intGapCount;

	}
	std::cout << "The Gap is  : "  << intLastGap  ;
}

int main()
{
	 int num = 1;

  
       std::cout << "Please enter you number : " ;
       std::cin >> num;
       decimalToBinary(num);
	
  
	return 0;
}