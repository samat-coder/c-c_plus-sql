#include <stdio.h>
int main()
{

    char input;

    printf("\n\tenter the character:");
    scanf("%c", &input);

    int asciivalue = (int)input;
    printf("\n\n\tascii value of character: %d", asciivalue);
}