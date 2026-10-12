#include <stdio.h>

int main()
{
    int n,s=0,z;
    printf("Enter number of terms: ");

    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        z=i;
        if(i%2==0){
            z=i*(-1);
        }

        s=s+z;


    }

    printf("%d",s);
    
    return 0;
}