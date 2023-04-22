#include <stdio.h>

int main() {
    char ch;
    printf("Enter characters: ");
    while((ch = getchar()) != 13) {
        putchar('*');
    }
    printf("\nEntered characters: ");
    rewind(stdin); // Clear input buffer
    while((ch = getchar()) != 13) {
        putchar(ch);
    }
    return 0;
}