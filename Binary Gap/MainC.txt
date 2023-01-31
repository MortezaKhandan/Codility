#include <iostream>
#include <stdbool.h>

//////////////
// this method will print all the 32 bits of a number
int  decimalToBinary(int num) 
{
    int intGapCount=0;
    int intLastGap=0;
    bool isStarted=false;

	do 
	{
	    if (num%2)
		{
			if (isStarted== false)
	       {
             intGapCount=0;
             isStarted=true;
	       }
	       else if (isStarted == true)
	       {
		     intLastGap = intLastGap > intGapCount ? intLastGap : intGapCount;
		     intGapCount= 0;
	        }
		}
		else
		{
			  if (isStarted == true)
	          ++intGapCount;
		}

	} while ( num /= 2 )  ;

  return  intLastGap  ;
}