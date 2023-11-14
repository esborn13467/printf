#include <stdio.h> /*  Include standard I/O for comparison*/
#include "printf.h" /* Include your custom printf implementation*/

int main(void)
{
    int i = 42;
    char c = 'A';
    char *s = "Hello, World!";

    printf("Standard printf:\n");
    printf("Integer: %d\n", i);
    printf("Character: %c\n", c);
    printf("String: %s\n", s);

    printf("\nCustom _printf:\n");
    _printf("Integer: %d\n", i);
    _printf("Character: %c\n", c);
    _printf("String: %s\n", s);

    return (0);
}

