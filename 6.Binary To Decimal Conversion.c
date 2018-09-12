//trying with recursion
int binaryToDecimal(int n)
{
  int m=1, ans=0;
  /*if(n<9)
  {
    ans = ans +n;
    printf("%d",ans);
  }
  else
  {
    r = r%10;
    ans=ans+ r *m
  }*/
  while(n>0)
  {
    ans+=((n%10)*(m));
    n/=10;
    m*=2;
  }
  return ans;
}
