#include <stdio.h>

int main()
{
    int i,n,z=0;
    printf("Enter Number of terms");

    while (i<n)
    {
        z=z+i;
        i++;
        i=z;
        i=i+z;
    }
    

    return 0;
}