#include <stdio.h>
#include <string.h>  // Needed for strcmp()

float add(float a, float b) {
    return a + b;
}
float sub(float a , float b){
    return a-b;
}
float mul(float a , float b){
    return a*b;
}
float div(float a, float b){
    return a/b;
}
int main(void)
{
    printf("Welcome to the calculator\n");

    char choose[20];

    printf("Enter what do you want to do?\n");
    printf("1. addition\n2. subtraction\n3. multiplication\n4. division\n----> ");
    scanf("%19s", choose);  // no & for string

    printf("OK, you chose --> %s\n", choose);

    if (strcmp(choose,"1") == 0|| strcmp(choose, "add") == 0 || strcmp(choose, "addition") == 0) {
        float a, b;
        printf("Enter the first number -> ");
        scanf("%f", &a);
        printf("Enter the second number -> ");
        scanf("%f", &b);

    }
    else if (strcmp(choose,"2") == 0|| strcmp(choose, "sub") == 0 || strcmp(choose, "subtraction") == 0)
    {
        float a, b;
        printf("Enter the first number -> ");
        scanf("%f", &a);
        printf("Enter the second number -> ");
        scanf("%f", &b);
        printf("Result of subtraction is  = %.2f\n", sub(a, b));
    }
    else if (strcmp(choose,"3") == 0|| strcmp(choose, "mul") == 0 || strcmp(choose, "multiplication") == 0)
    {
        float a, b;
        printf("Enter the first number -> ");
        scanf("%f", &a);
        printf("Enter the second number -> ");
        scanf("%f", &b);
        printf("Result of multiplication is  = %.2f\n", sub(a, b));
    }
     else if (strcmp(choose,"4") == 0|| strcmp(choose, "div") == 0 || strcmp(choose, "division") == 0)
    {
        float a, b;
        printf("Enter the first number -> ");
        scanf("%f", &a);
        printf("Enter the second number -> ");
        scanf("%f", &b);
        printf("Result of division is  = %.2f\n", div(a, b));
    }



    return 0;
}
