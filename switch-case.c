#include <stdio.h>

int main(void)
{
    int a;
    printf("enter a-->");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you enterd 1");
        break;
    case 2:
        printf("you enterd 2");
        break;
    default:
        printf("nothing matched");
    }

    return 0; // End of program
}
// break statement is for , if you did not put it then cases next cases will also excecuted