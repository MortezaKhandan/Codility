
int goldenLeader(int A[], int len)
{
	int n = len;
	int size = 0;
	int value;
	int index_num;
	for (int k = 0; k < n; ++k)
	{
		if (size == 0)
		{
			index_num = k;
			++size;
			value = A[k];
		}
		else
		{
			if (value != A[k])
				--size;
			else
			{
				++size;
				index_num = k;
			}
		}
	}
	int candidate = -1;
	if (size > 0)
		candidate = value;
	else
		return -1;

	int leader_index = -1;
	int count = 0;
	for (int k = 0; k < n; ++k)
	{
		if (A[k] == candidate)
			++count;
	}

	if (count > n / 2)
		leader_index = index_num;

	return leader_index;
}

int main()
{
	int arr[] = {0, 0, 1, 1, 1};
	printf("%d", goldenLeader(arr, sizeof(arr) / sizeof(arr[0])));
	return 0;
}
