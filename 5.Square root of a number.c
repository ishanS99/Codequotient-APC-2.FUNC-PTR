#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int t;
  float k=0.001,l,n,ans,m;
  float i=0,j=1;
  scanf("%d",&t);
  while(t--)
  {
    l=1;
    scanf("%f",&n);
    if(n==0)
      printf("%.2f\n",i);
      
    else if(n==1)
      printf("%.2f\n",j);
      
    else
    {
        while(l*l<n)
        {
            l++;
        }
        
        for(m=l-1;m<n;m=m+k)
        {
          if((m*m)>=n)
          {
            ans=m;
            break;
          }
        }
        //if(ans%j==0.0)
            printf("%.2f\n",ans);
        //else
        //    printf("%.2f\n",ans+k);
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}