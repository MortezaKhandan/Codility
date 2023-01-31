#include <iostream>
#include <vector>
#include <wtypes.h>


#include <iostream>
#include <cstdlib>
#include <deque>
#include <stack>
#include <stddef.h>
#include <vector>
#include <set>
#include <cassert>
using namespace std;

int fib(int x)   // recursive  Fibonacci_up_to_n_step 
{
	if ( x < 2 ) 
		return x;

	else 
		return( fib(x - 1) + fib(x - 2) );

}

int Fibonacci(int N)     // dynamic programming  Fibonacci_up_to_n_step 
{
	int a = 0, b = 1, next, i;
	if ( N == 0 )
		return a;
	for ( i = 2; i <= N; i++ )
	{
		next = a + b;
		a = b;
		b = next;
	}
	return b;
}

int Fibonacci_Array(int N) // dynamic programming  Fibonacci_up_to_n_step 
{
	int* FibArray = (int*)malloc(( N + 2 ) * sizeof(int));
	memset(FibArray, 0, ( N + 2 ) * sizeof(int));
	int i;

	FibArray[ 0 ] = 0;
	FibArray[ 1 ] = 1;

	for ( i = 2; i <= N; i++ )
	{
		FibArray[ i ] = FibArray[ i - 1 ] + FibArray[ i - 2 ];
	}
	return FibArray[ N ];
}

void  Fibonacci_Up_to_a_Certain_Number(int N)  // dynamic programming 
{
	int a = 0;
	int b = 1;
	while ( a <= N )
	{
		std::cout << a << " ";
		int next = a + b;
		a = b;
		b = next;
	}
}



int main()
{
	printf("%d    %d    %d" , fib(20) , Fibonacci(20) , Fibonacci_Array(20));
	
	//int arr[] = {0 , 0 , 1 , 1 , 1};
	//printf("%d", goldenLeader(arr, sizeof(arr) / sizeof(arr[ 0 ])));
	return 0;
}