#include<stdio.h>

int swappNumbers(int x,int y){

    int temp;

    temp = x;
    x=y;
    y=temp;
    // printf("After swapping, The Value of x is %d and value of y is %d: ",x,y);
    return x;
    
}

int main(){
    int x =5;
    int y=6;
     printf("Value of x is %d and y is %d: ",x,y);
    swappNumbers(x,y);
    //printf("After swapping, The Value of x is %d and value of y is %d: ",swappNumbers(x,y)-y,swappNumbers(x,y)-x);
    printf("%d",swappNumbers(x,y));

}