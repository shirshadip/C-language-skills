#include <stdio.h>
float avg(int a, int b, int c);
float avg(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main(void)
{
    float a = 3;
    float b = 6;
    float c = 5;
    printf("%f\n", avg(a, b, c));
    return 0;
}
