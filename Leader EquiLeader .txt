#include <iostream>
#include <vector>
#include <stdio.h>
#include <stack>
#include <map>
using namespace std;
int solution(vector<int> &A){

    // write your code in C++14 (g++ 6.2.0)
    int leader,leadercnt=0,element=0,cnt=0,leaderfound=0,seq=0,candidate=0;
    for(uint i=0;i<A.size();i++)
    {
        if(cnt == 0)
        {
            element = A[i];
            cnt++;
        }
        else
        {
            if(A[i]!=element)
            {
                cnt--;
            }
            else
            {
                cnt++;
            }
        }
    }
    if(cnt>0)
    {
        candidate=element;
        leadercnt=cnt;
        
    }
    cnt=0;
    for(uint i=0;i<A.size();i++)
    {
        if(candidate==A[i])
        {
            cnt++;
        }
    }
    if(cnt>(int)A.size()/2)
    {
        leaderfound=1;
        leader = candidate;   
        leadercnt =  cnt;   
    }
    if(leaderfound == 0)
    {
        //printf("Return 0 no leader found\n");
        return 0;
    }

    int nonleadercntr=A.size()-leadercnt;
    int nonleadercntl=0;
    int leadercntr=leadercnt;
    int leadercntl=0;
    //printf("Found leader %d and leadercnt %d\n",leader,leadercnt);
    for(uint i=0;i<A.size();i++)
    {
        if(A[i]==leader)
        {
            leadercntl++;
            leadercntr--;
        }
        else
        {
            nonleadercntl++;
            nonleadercntr--;
        }
        if((leadercntl > nonleadercntl) && (leadercntr > nonleadercntr))
        {
            seq++;
        }
    }
    return seq;
}

int main()
{
    // A[0] = 4
    // A[1] = 3
    // A[2] = 4
    // A[3] = 4
    // A[4] = 4
    // A[5] = 2
    
    int a[] = {4, 4, 2, 5, 3, 4, 4, 4}; // {6, 8, 4, 6, 8, 6, 6}; // {4, 6, 6, 6, 6, 8, 8}
    // printf("%d", solution(a, sizeof(a) / sizeof(a[0])));
    std::vector<int> intVec = {4, 4, 2, 5, 3, 4, 4, 4};
    printf("%d", solution(intVec));
    return 0;
}