#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int randomNo, num, i = 1;
    srand(time(0));
    randomNo = rand() % 100+1;

    while (i > 0)
    {
        if (i==1)
        {
            printf("Guess a number between 1 to 100: ");
        }
        else{
            printf("Guess Another Number: ");
        }
        scanf("%d", &num);

        if (num > randomNo&&num>0&&num<=100)
        {
            printf("The Number you gussed is greater than actual number, Lower Number please\n");
            i++;
        }
        else if (num < randomNo && num>0 &&num<=100)
        {
            printf("The Number you gussed is smaller than actual number, Upper Number\n");i++;
        }
        else if (num<=0||num>100)
        {
            printf("Please enter a number between 1 to 100\n");
            i++;
        }
        

        else{
            printf("You got it,The actual number is: %d,\n You took %d attempts",randomNo,i);
            break;
        }
    }

    return 0;
}