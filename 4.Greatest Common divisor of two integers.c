int gcd(int i, int j)
{
	int d,max;
  
  if(i>j)
    d=j;
  else
    d=i;
  for(int k=1;k<=d;k++)
  {
    if(i%k==0 && j%k==0)
      max=k;
  }
  return max;
}

