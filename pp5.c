#include<stdio.h>

int main(){

    int income,tax;

    printf("Enter YOur Income: ");
    scanf("%d",&income);

    if (income<+250000)
    {
        tax = 0;
    }
    

    else if(income>250000 && income <=500000){
        tax = (income-250000) * 0.05;
        
    }
    else if (income>500000&&income<=1000000)
    {
        tax = (250000*0.05)+((income-500000)*0.2);
    }
    else if (income > 1000000){
        tax = (250000*0.05)+ (500000*0.2) + ((income - 1000000)*0.3);
    }

    printf("Your Income Is %d and You have to %d Amount of tax",income,tax);
    
}