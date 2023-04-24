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

// A structure to represent a stack
struct Stack {
	int top;
	unsigned capacity;
	int* array;
};

// function to create a stack of given capacity. It initializes size of
// stack as 0
struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int*)malloc(stack->capacity * sizeof(int));
	return stack;
}

// Stack is full when top is equal to the last index
int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity - 1;
}

// Stack is empty when top is equal to -1
int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

// Function to add an item to stack. It increases top by 1
void push(struct Stack* stack, int item)
{
	if (isFull(stack))
		return;
	stack->array[++stack->top] = item;
	//printf("%d pushed to stack\n", item);
}

// Function to remove an item from stack. It decreases top by 1
int pop(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top--];
}

// Function to return the top from stack without removing it
int top(struct Stack* stack)
{
	if (isEmpty(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

int solution(int A[], int B[], int N)
{
    int currentFish=0 ;

   struct Stack* intStackA = createStack(N);
   struct Stack* intStackB = createStack(N);

    push(intStackA, A[N-1]); 
    push(intStackB, B[N-1]); 
    //intStackA.push(A[N-1]); // put the last value in stack
    //intStackB.push(B[N-1]) ;
    for (int i = N-2 ; i >= 0 ; --i )
    {
      currentFish=A[i];
      if (B[i] == 0 || (B[i] == 1 && top(intStackB) == 1 ) ) 
      {
        push(intStackA, A[i]);
        push(intStackB, B[i]);
      }
      else
      {
        while ( !isEmpty(intStackA) && top(intStackB) == 0 && currentFish > top(intStackA))
        {
           pop(intStackA);
           pop(intStackB);
        }

        if ( isEmpty(intStackA) || top(intStackB) == 1  )
          {
            push(intStackA , A[i]);
            push(intStackB , B[i]);
          }

      }

    }
    int size=0;

    while (!isEmpty(intStackA) )
    {
      ++size;
      pop(intStackA);
    }
    
    return size;
 }


int main()
{


 int  Avec[]= {4 , 3};
  int Bvec[]= {1 , 0} ; 

  cout << solution(Avec,Bvec , 2) << endl;
  return 0;
}