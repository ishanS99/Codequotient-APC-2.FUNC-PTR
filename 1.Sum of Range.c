int sumOfRange(int min, int max)
{
  
  if(min>max)
    return 0;
  else
  {
    int sum=0;
    for(int i=min;i<=max;i++)
    {
      sum = sum + i;
    }
    return sum;
  }
    
}