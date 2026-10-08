#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define WIDTH 80
#define HEIGHT 25

int main()
{
    int drops[WIDTH];

    srand(time(NULL));

    // Starting position of each column
    for (int i = 0; i < WIDTH; i++)
    {
        drops[i] = rand() % HEIGHT;
    }

    while (1)
    {
        // Clear terminal
        printf("\033[2J\033[H");

        for (int y = 0; y < HEIGHT; y++)
        {
            for (int x = 0; x < WIDTH; x++)
            {
                if (drops[x] == y)
                {
                    char c = '0' + rand() % 10;
                    printf("\033[32m%c\033[0m", c);
                }
                else
                {
                    printf(" ");
                }
            }

            printf("\n");
        }

        // Move every drop downward
        for (int x = 0; x < WIDTH; x++)
        {
            drops[x]++;

            if (drops[x] >= HEIGHT)
            {
                drops[x] = 0;
            }
        }

        usleep(50000); // 50 milliseconds
    }

    return 0;
}