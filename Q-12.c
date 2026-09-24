#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    printf("The ASCII code of '%c' is: %d\n", ch, ch);
    return 0;
}
