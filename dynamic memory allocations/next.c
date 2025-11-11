// arrrow operator 
#include <stdio.h>
#include <stdlib.h>

int main (){
    float n = 5;
    float *ptr ;
    ptr =(float *)malloc ( n * sizeof (float));
    ptr[0]=3.5454;

    printf ("the first element is %.2f",ptr[0]);

    return 0;
}