#include <stdio.h>

int main()
{
    
    int n,i;
    int a=1,b=-1,s=0;
    printf("Enter number of terms: ");

    scanf("%d",&n);

    for ( i = 1; i <= n; i++)
    {
        printf("%d ",s);
        s=a+b;
        b=a;
        a=s;
    }
    
    return 0;
}