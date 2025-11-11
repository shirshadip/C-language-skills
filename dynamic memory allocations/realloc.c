// arrrow operator 
#include <stdio.h>

int main (){
    int n ;
    int *ptr;
    scanf ("%d",&n);
    ptr = (int *) realloc (ptr , n * sizeof (int));
    ptr [0]=5;
    ptr [1]=10;
    printf ("the first element is %d and the second element is %d",ptr[0],ptr[1]);
    return 0;
}