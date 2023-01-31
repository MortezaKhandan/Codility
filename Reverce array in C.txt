void reverseArray(int arr[], int n) {
	int i, temp;
	for ( i = 0; i < n / 2; i++ ) {
		temp = arr[ i ];
		arr[ i ] = arr[ n - i - 1 ];
		arr[ n - i - 1 ] = temp;
	}
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