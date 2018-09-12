int threeConsecutive(int a, int b, int c)
{
  
 
 if(a==b || b==c || c==a)
    return 0;
  
 else if(((a == b + 1 || a == b - 1) || (a == c + 1 || a == c - 1)) && ((b == c + 1 || b == c - 1)) 
|| ((b == c + 1 || b == c - 1) || (a == b + 1 || a == b - 1)) && (a == c + 1 || a == c - 1))
   return 1;
  
  return 0;
  
}
  