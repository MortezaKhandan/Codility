
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <stdio.h>
#include <stdint.h>

using namespace std;


int Geeks_solution(int A[], int n)
{
	bool* present = (bool*)malloc((n + 1)*sizeof(bool));
	memset(present, 0, ( n + 1 ) * sizeof(bool));

	for ( int i = 0; i < n; i++ ) {
		if ( A[ i ] > 0 && A[ i ] <= n )
			present[ A[ i ] ] = true;
	}

	for ( int i = 1; i <= n; i++ )
		if ( !present[ i ] )
			return i;

	return n + 1;
}

int my_solution(vector<int> &A) 
{
	vector<int> vec;
	vec.resize(A.size() + 2, 0);
	int findInt = 0;
	int posibleNegetive = 0;
	for (int i =0 ; i < A.size() ; ++i)
	{
		if ( A[ i ] > 0  && A[ i ] < vec.size() )
			vec[ A[ i ] ] = 1;
			
	}

	for ( int i = 1; i < vec.size(); ++i )
		if ( vec[ i ] == 0 )
			return i;
	
	return 1;
}


int main() {
	//int array1[] = { 1, 3, 6, 4, 1, 2 };
	//int array2[] = { 1, 2, 3 };
	//int array3[] = {-1, -3 };
	//cout << solution(array1, sizeof(array1)/sizeof(array1[0])) << endl; // 0
	//cout << solution(array2, sizeof(array2) / sizeof(array2[ 0 ])) << endl; // 0
	//cout << solution(array3, sizeof(array3) / sizeof(array3[ 0 ])) << endl; // 0
     vector<int>  array1 = { 1, 3, 6, 4, 1, 2 };
	 vector<int> array2 = { 1, 2, 3 };
	 vector<int> array3 = {-1, -3 };

	cout << my_solution(array1) << endl; // 0
	cout << my_solution(array2) << endl; // 0
	cout << my_solution(array3) << endl; // 0

	int array11[] = { 1, 3, 6, 4, 1, 2 };
	int array22[] = { 1, 2, 3 };
	int array33[] = {-1, -3 };

	cout << Geeks_solution(array11, sizeof(array11) / sizeof(array11[ 0 ])) << endl; // 0
	cout << Geeks_solution(array22, sizeof(array22) / sizeof(array22[ 0 ])) << endl; // 0
	cout << Geeks_solution(array33, sizeof(array33) / sizeof(array33[ 0 ])) << endl; // 0
	return 0;
}