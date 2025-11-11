// arrrow operator
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("a.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("the number read from file is %d", num);
    fclose(ptr);
    return 0;
}