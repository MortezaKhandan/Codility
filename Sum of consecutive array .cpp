
 
  N * (N+1) / 2 
 int sum = ((vec.size())*(vec.size()+1)) / 2 ;
 
             



// 1 2 3 4        10   ===> N=4  So vec.size() is 4 
// 1 3 4 4 5 6    21.  ===> N=6  


// works for all series 
// S =( n / 2) * (A[0] * A[n-1]);

int calculateSum(const std::vector<int>& arr) {
    int n = arr.size();
    
    // Check if the array is not empty
    if (n == 0) {
        return 0;  // Return 0 for an empty array
    }

    // Calculate the sum using the formula
    return (n * (arr[0] + arr[n - 1])) / 2;
}

