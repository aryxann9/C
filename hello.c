#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b&&a>c){
        printf("Largest Number is: %d",a);
    }
    else if(b>c){
        printf("Largest is: %d",b);
    }
    else{
        printf("Largest is: %d",c);
    }
}
