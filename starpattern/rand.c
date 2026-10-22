#include <stdio.h>

int main() {
    int ascii_num = 65;
    char ch = (char)ascii_num; // Explicitly casts 65 to 'A'
    
    printf("Character: %c\n", ch); // Outputs: A
    return 0;
}
