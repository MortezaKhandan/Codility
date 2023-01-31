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

int *CountingSort (int A[] , int len )
{
	int intMAxVal= MaxValueOfArray( A , len);
	int * Arraye= (int*)malloc((intMAxVal +1)* sizeof(int));
	memset (Arraye , 0 ,(intMAxVal +1)* sizeof(int) );

  for (int i=0 ; i < len  ; ++i)
      Arraye[A[i]] +=1;

int index=0;
  for (int j = 0 ; j <= intMAxVal  ; ++j)
  {
	for (int t = 0 ; t < Arraye[j] ; ++t)
	{
      printf("%d " , j );
	  A[index++]=j ;
	}
  }

free (Arraye);
return A;
}

int main()
{
 int Arraye[]= {5,0,1,1,8,9,11,12,6};

 int *result = CountingSort( Arraye , sizeof(Arraye)/ sizeof(Arraye[0])); 
 
 printf("\n");
  for (int i =0 ; i < sizeof(Arraye)/ sizeof(Arraye[0]) ; ++i )
	printf("%d ",result[i] );

  return 0;
}