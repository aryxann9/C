#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter the number of Lines: ");

    scanf("%d",&n);

    for (i = 1; i <=n ; i++)
    {
        for (j = 1; j <=2*i; j++)
        {
            if(j%2!=0){
            printf("%d",j);
            }
        }
        printf("\n");
    }

    

    return 0;
}