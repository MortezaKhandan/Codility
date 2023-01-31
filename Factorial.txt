	int n = 0; 

	std::cin >> n; 

	int Factorial = 1; 

	for ( int i = 1; i <= n; ++i )
		Factorial *= i; 

	printf("%d ", Factorial);