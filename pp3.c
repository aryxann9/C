#include <stdio.h>

int main()
{

    char ch;
    int salary , bonus , amount;


    printf("Enter F/M:");
    scanf("%c", &ch);

    printf("Enter your salary:");
    scanf("%d", &salary);

    if(ch == 'M'){
        bonus = (int)salary * 0.05;
    }
    else{
        bonus = (int)salary * 0.1;
    }

    if(salary <= 10000){
        bonus = bonus+ (int)(0.02*salary);
    }

    amount = salary+bonus;
    printf("Salary:%d \n" , salary);
    printf("Bonus:%d\n",bonus);

    printf("Amount to be paid:%d",amount);

}

