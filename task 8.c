#include <stdio.h>

int main() {
    int num;
    float fnum;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a float: ");
    scanf("%f", &fnum);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("\nYou entered:\nInteger: %d\nFloat: %f\nCharacter: %c\n", num, fnum, ch);

    return 0;
}
