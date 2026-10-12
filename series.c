#include <stdio.h>

int main()
{
    int a, d, n;

    printf("Enter 1st term: ");
    scanf("%d", &a);
    printf("Enter commondifference: ");
    scanf("%d", &d);
    printf("Enter no. of term: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", a + (i - 1) * d);
    }

    return 0;
}