#include <stdio.h>

struct MyStruct {
    int intValue;
    float floatValue;
    char charValue;
};

union MyUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main() {
    
    struct MyStruct s;
    s.intValue = 10;
    s.floatValue = 20.5;
    s.charValue = 'A';

    union MyUnion u;
    u.intValue = 10;
    printf("Union intValue: %d\n", u.intValue); 

    u.floatValue = 20.5;
    printf("Union floatValue: %.2f\n", u.floatValue); 

    u.charValue = 'A';
    printf("Union charValue: %c\n", u.charValue);

    printf("\nStructure values:\n");
    printf("intValue: %d\n", s.intValue);
    printf("floatValue: %.2f\n", s.floatValue);
    printf("charValue: %c\n", s.charValue);

    printf("\nUnion values after updating all members:\n");
    printf("intValue : %d\n", u.intValue);
    printf("floatValue : %.2f\n", u.floatValue);
    printf("charValue : %c\n", u.charValue);

    
}