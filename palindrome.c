#include<stdio.h>

int main(){

    int y,x,n,z=0,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    y=n;
    for ( i = 1; y>=1 ; i++)
    {
        x=y%10;

        z=z*10+x;

        y=y/10;
    }

    if(z==n){
        printf("%d is a palindrome",n);
    }
    else{
        printf("%d is not a Palindrome",n);
    }
    

}