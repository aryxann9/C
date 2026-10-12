#include <stdio.h>
int main()
{
    int n,s=0;

    printf("Enter a number: ");

    scanf("%d",&n);
    
    while (n>1)
    {
        
        if ((n%10)%2==0)
        {
               s=s+n%10;
        }
        n=n/10;

        

    }
    printf("%d",s);

    return 0;
}