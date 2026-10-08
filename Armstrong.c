#include<stdio.h>

int powerfunk(int a , int b){
    int z = 1;
    for ( int i  = 1;  i<= b; i++)
    {
        z = z*a;
    }
    return z;
}
int main(){

    int n,i,x,y=0,z;

     printf("Enter A number: ");

    scanf("%d",&n);
    x=n;
    for ( i = 0; x>=1; i++)
    {
        x = x/10;
    }

    x=n;
    for (int j = 1; j <= i; j++)
    {
        z=x%10;
        y= y+powerfunk(z,i);
        x=x/10;
    }

    if (y==n)
    {
        printf("%d is an Armstrong Number",n);

    }
    else
    {
          printf("%d is not an Armstrong Number",n);
    }
    
    
    
}