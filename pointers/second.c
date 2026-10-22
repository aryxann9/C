#include <stdio.h>
int swappingNumbers(int *a , int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y,*a,*b;
    printf("Enter The Value of x and y with a space:");
    scanf("%d %d",&x,&y);
    printf("Value of x and y before swapping is %d and %d\n",x,y);
    a=&x;
    b=&y;

    swappingNumbers(a,b);

    printf("Value after swapping of x and y is:%d and %d ",x,y);

    return 0;
}