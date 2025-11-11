// Pointers are one of the most powerful (and sometimes tricky) parts of C — but once you understand them, everything from arrays to dynamic memory becomes clear.
/*
ponter is a variable which stores the address of another varaiable

*/
#include <stdio.h>
int main()
{
    int a = 54;
    int *ptr;
    ptr = &a;
    printf("value of a = %d\n", a);
    printf("address of a = %p\n", &a);
    printf("Address stored in ptr = %p\n", ptr);
    printf("Value pointed to by ptr = %d\n", *ptr); // dereferencing

    return 0;
}