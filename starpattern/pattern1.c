#include <stdio.h>

int main()
{
    

    int i,j,c,r;
    printf("Enter No. of rows: ");
    scanf("%d",&r);

    printf("Enter No. of columns: ");
    scanf("%d",&c);
    for (i = 0; i <c ; i++)
    {
        for (j = 0; j< r; j++)
        {
            printf("*");
           
        }
         printf("\n");
    }
    

    return 0;
}