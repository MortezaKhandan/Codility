

int solution(vector<int> &vec)
{
	long long intSum=0;
	long long intSumFirstPart=0;
    long long intOutput=1000000;
	for (auto it = vec.begin() ; it !=vec.end() ; ++it)
	{
        intSum += *it;
	}

	for (auto it = vec.begin() ; it !=(vec.end()-1)  ; ++it)
	{
		intSumFirstPart += *it ;
        intSum -=  *it;
		intOutput  = min((abs (intSumFirstPart - intSum)) , intOutput);
		if (intOutput == 0)
		   return 0; 
	}
  return static_cast<int>(intOutput);
}
