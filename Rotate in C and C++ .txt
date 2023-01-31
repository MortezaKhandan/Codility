void rotate(std::vector<int> &vec, int k) {
	k = k % vec.size();
	std::reverse(vec.begin(), vec.end());
	std::reverse(vec.begin(), vec.begin() + k);
	std::reverse(vec.begin() + k, vec.end());
}



void reverse(int arr[], int start, int end) {
	while ( start < end ) {
		int temp = arr[ start ];
		arr[ start ] = arr[ end ];
		arr[ end ] = temp;
		start++;
		end--;
	}
}

void rotate(int arr[], int n, int k) {
	k = k % n;
	reverse(arr, 0, n - 1);
	reverse(arr, 0, k - 1);
	reverse(arr, k, n - 1);
}
