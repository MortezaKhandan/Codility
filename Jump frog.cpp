int solution(int X, int Y, int D)
{
   Y= Y-X;
  return  (Y%D) ? ((Y/D)+1) : (Y/D) ;
}