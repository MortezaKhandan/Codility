    int intArraye[5];
  	intArraye[0]= 2;
    intArraye[1]= 4;
	intArraye[2]= 9;
	intArraye[3]= 3;
    intArraye[4]= 7;
	
	int arayelen =sizeof(intArraye) / sizeof(int);

	for (int i = 0 ; i <=  (arayelen/2)  ; ++i)
	{
      int temp= intArraye[i];
      intArraye[i] = intArraye[arayelen-1-i];
	  intArraye[arayelen-1-i] = temp;
	}

	for (int i = 0 ; i<  (arayelen )  ; ++i)
		std::cout << intArraye[i] <<  " " ;
