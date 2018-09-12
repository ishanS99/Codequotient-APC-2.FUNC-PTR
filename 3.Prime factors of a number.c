#include <stdio.h>

void primeFactors(int n)

{
  
while (n%2 == 0)
    
{
        
printf("2\n");
        
n = n/2;
    
}
  
for(int i=3;i<=n;i=i+2)
  
{
    
if(n%i==0)
    
{
        
while(n%i==0)
        
{
            
printf("%d\n",i);
            
n=n/i;
        
}
    
}
    
if(n<3)

        
break;
  
}
  
//if(n>2)
   
// printf("%d\n",n);

}


int main(void)
{
    
// Your code here!

    primeFactors(18);


}
