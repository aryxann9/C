#include <stdio.h>

int main(){

    int no_ten_coins , no_five_coins , no_two_coins , no_one_coins;

    printf("Enter the number of ten rupee coin:");
    scanf("%d",&no_ten_coins);

      printf("Enter the number of five rupee coin:");
    scanf("%d",&no_five_coins);

      printf("Enter the number of two rupee coin:");
    scanf("%d",&no_two_coins);

      printf("Enter the number of one rupee coin:");
    scanf("%d",&no_one_coins);
    int totalAmount = (no_ten_coins*10)+(no_five_coins*5)+(no_two_coins*2)+(no_one_coins*1);
    printf("Total Amount:%d",totalAmount);

}