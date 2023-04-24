Red–black algorighem 
Hash table 

//////////////////////////////////////////////
	/*
	
	* * * * * * *
	  * * * * *
	    * * *
	      *
	*/
	int n;
	std::cin >> n;

	for ( int i = n; i > 0; --i )
	{
		for ( int j = 0; j < 2*(n-i); ++j )
			std::cout << " ";
		for (int t=1 ; t <= (2*i -1) ; ++t )
			std::cout << "* ";

		std::cout << "\n";
    }
	
	
	
//////////////// Fibonacci /////////////////////////
	int n; 
	std::cin >> n;
	int a = 0;
	int b = 1;
	while (a <= n)
	{
		std::cout << a << " ";
		int t = a + b;
		a = b;
		b = t;
	}


////////////////////convert to binary ///////////////

	// for (int i = 31 ; i >= 0 ; --i)
	// {
	// 	int Mask= ( 1 << i);
	// 	if (Mask & num)
	// 	std::cout << "1" ;
	// 	else 
	// 	std::cout << "0";
	// }
	
		do 
	{
	    if (num%2)
		BinaryVec.push_back(1);//std::cout << "1" ;
		else
		BinaryVec.push_back(0);//std::cout << "0";

	} while ( num /= 2 )  ;
	

	for (auto it= BinaryVec.rbegin() ; it !=BinaryVec.rend() ; ++it  )
	std::cout <<*it << ;


