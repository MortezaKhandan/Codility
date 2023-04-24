  int intArraye[5];
  	intArraye[0]= 2;
    intArraye[1]= 4;
	intArraye[3]= 3;

   std::cout << sizeof(intArraye) << std::endl; // 20 

   char charArraye[5] = "Hi";
   std::cout << sizeof(charArraye) << std::endl; //5
   std::cout << strlen(charArraye) << std::endl; //2

   char charArraye_2[] = "Hi";
   std::cout << sizeof(charArraye_2) << std::endl; //3    [H] [i] [\0] 
   std::cout << strlen(charArraye_2) << std::endl; //2 
