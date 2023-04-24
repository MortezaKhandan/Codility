
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
 if (len == 0 || len==1)
  return len;

  qsort(arr,len,sizeof(int),compare);

//   for (int i= 0 ; i< len ; ++i )
//    printf("%d" , arr[i]);

 int result=1; 

 for (int i=1 ; i< len ; ++i)
 {
	if (arr[i] != arr[i-1])
      result +=1;
 }
 return result;

}


int main()
{
	int arr[] = {0, 1, 2};
    printf("%d" , solution(arr , sizeof(arr)/sizeof(arr[0])));
	return 0;
}