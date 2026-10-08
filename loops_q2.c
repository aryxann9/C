#include <stdio.h>

int main()
{

    //     int n,i;
    //     printf("Enter A Number");
    //     scanf("%d",&n);
    //     for ( i = n; i>0; i--)
    //     {
    //         printf("%d\n",i);
    //     }

    // int n,i;
    // printf("Enter A number: ");
    // scanf("%d",&n);
    // for (i = 1; i < =10; i++)
    // {
    //     printf("%d x %d = %d \n",n,i,n*i);
    // }

    // for (int i = 10; i>0 ; i--)
    // {
    //     printf("%d\n",i*10);
    // }

    // int n,i=1,z=0;
    // printf("Enter A Number: ");
    // scanf("%d",&n);

    // while (i<=n)
    // {
    //     z=z+i;
    //     i++;
    // }
    // printf("%d\n",z);

    // int n,i=1,z=0;

    // printf("Enter A Number");
    // scanf("%d",&n);

    // do
    // {
    //     z= z+i;
    //     i++;
    // } while (i<=n);

    // printf("%d\n",z);

    int n, i, z = 1;
    printf("Enter A Number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        z = z* i;
    }

    printf("%d\n", z);

    
}
