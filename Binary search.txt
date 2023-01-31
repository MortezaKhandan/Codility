#include <iostream>
#include <cstdlib>
#include <deque>
#include <stack>
#include <queue>
#include <stddef.h>
#include <vector>
using namespace std;
// C program for array implementation of stack
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>


int binarySearch(int A[],int len , int x)
{
int beg= 0 ; 
int end= len-1;
int result = -1; 
int mid=0;
 while (beg <= end)
 {
    mid = (beg + end) / 2; 
    if (A[mid] <= x)
    {
       beg = mid + 1;
       result = mid;
    }
    else 
     end = mid - 1;
 }
 return result;
}
int main()
{
  int Array[]={12,15,15,19,24,31,53,59,60,62}; 

std::cout << " result = " << binarySearch (Array , 9 , 53) << std::endl;

  return 0;
}