int verifyPrime(int n)
{
  if(n<2)
    return 0;
  else if(n<4)
    return 1;
  else
  {
    if(n%2 ==0)
      return 0;
    else
    {
      for(int i=3;i<=n/2;i+=2)
      {
        if(n%i==0)
        	return 0;
      }
      return 1;
    }
  }
}