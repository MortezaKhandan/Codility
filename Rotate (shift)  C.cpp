#include <iostream>
#include <vector>
using namespace std;
struct SResults
{
	int *A;
	int N; // Length of the array
};

struct SResults solution(int A[], int N, int K)
{
	 SResults Results;
	 for (int loop = 0; loop < K; ++loop) {
		int Temp = A[N - 1];
		for (int i = N - 1; i >= 0; --i)
		{
			if (i != 0)
				A[i] = A[i - 1];
			else
				A[i] = Temp;
		}
	}
	Results.N = N;
	Results.A= A;
	return Results;
}

int main()
{

	int MyArray[] = {-4};
	int size_arraye = sizeof(MyArray) / sizeof(int);
	SResults RotatedResult = solution(MyArray, size_arraye, 0);

	for (int i = 0; i < size_arraye; ++i)
		printf("%d ", MyArray[i]);

printf("\n");
	for (int i = 0; i < size_arraye; ++i)
		printf("%d ", RotatedResult.A[i]);


	return 0;
}