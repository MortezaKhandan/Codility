#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int Max(int A, int B)
{
	return A>B ? A : B;
}
int Min(int A, int B)
{
	return A<B ? A : B;
}

 int MaxValueOfArray(int A[] , int len )
 {
     int MaxVal=0;
     for (int i=0 ; i < len ; ++i)
        MaxVal= Max(MaxVal, A[i]);

     return MaxVal;
 }


int main()
{
 int Arraye[]= {5,0,1,1,8,9,11,12,6};

 printf("\n");
 printf("%d ",MaxValueOfArray( Arraye , sizeof(Arraye)/ sizeof(Arraye[0])) );

  return 0;
}