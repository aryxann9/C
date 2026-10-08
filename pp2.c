#include<stdio.h>

int main(){

    int quantity;
    float value;

    float discount;
    float tax;


    printf("Enter The Quantity Bought:");
    scanf("%d",&quantity);

    printf("Enter The Value Of Product in INR:");
    scanf("%f",&value);

    printf("Enter Discount in Percentage:");
    scanf("%f",&discount);

     printf("Enter tax in Percentage:");
       scanf("%f",&tax);

    int Price = (int ) quantity*(value-((discount/100)*value) + ((tax/100)*value));

    printf("Final Bill:%d",Price);
  
}