#include <stdio.h>
int changingValue(int *a){
    printf("the value of x is: %d\n",*a);
    *a= *a*10;
}
int main()
{
    int *j,x=65;

    j=&x;

    changingValue(j);
    printf("%d",x);
    printf("Value of x after multiplying with 10: %d",x);

    return 0;
}