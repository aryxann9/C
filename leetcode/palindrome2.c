#include <stdio.h>
#include<math.h>
#include<stdbool.h>

bool IsPlaindrome(int x);
int main()
{
    
   printf( "%d",IsPlaindrome(0));
    return 0;
}

bool IsPlaindrome(int x){
  
    int n;
    if (x>0)
    {
      n = log10(x)+1;
    }
    else if(x<0){
        return false;
    }
    else{
        n=1;
    }
    
    long long rev = 0;
    long long z;
    z=x;
    for ( int i; n >0; n--)
    {
        rev =z%10+ rev*10;

        z = z/10;
    }
    z=x;
    if(z>=0&&z==rev){
        return true;
    }
    else{
        return false;
    }
    
}