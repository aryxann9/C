#include <stdio.h>

int main()
{
    int i,j,n;
    printf("Enter No. of lines: ");
    scanf("%d",&n);
    for (i = 1; i < n; i++)
    {
        for (j =1; j<=i; j++)
        {
            char ch =64+(char)j;
            printf("%c",ch);
        }
        printf("\n");
        
    }
    

    return 0;
}