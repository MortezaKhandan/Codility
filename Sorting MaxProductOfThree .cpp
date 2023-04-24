#include <iostream>
#include <cstdlib>
using namespace std;

int Max(int a,int b)
{
	return a>b ?a : b ;
}
int compare(const void* a, const void* b)
{
	const int* x = (int*) a;
	const int* y = (int*) b;

	if (*x > *y)
		return 1;
	else if (*x < *y)
		return -1;

	return 0;
}
int solution(int arr[] , int len)
{
   qsort(arr,len,sizeof(int),compare);
//   for (int i= 0 ; i< len ; ++i )
//    printf("%d" , arr[i]);
    int maxWithNegativeNumbers = arr[0] * arr[1] * arr[len - 1];
    int maxWithPositiveNumbers = arr[len - 3] * arr[len - 2] * arr[len - 1];

    return Max(maxWithNegativeNumbers, maxWithPositiveNumbers);
}

int main()
{
	int arr[] = {-3, 1, 2 ,-2,5,6};
    printf("%d" , solution(arr , sizeof(arr)/sizeof(arr[0])));

	return 0;
}
