#include <stdio.h>

int main(void) {
    int marks[] = {21,32,44,4253};
    // int *ptr = &marks[0];
    int *ptr = marks;
    for (int i = 0; i <4; i++)
    {
        /* code */
        printf("the marks at index %d is %d\n",i, marks[i]);

    }
    for (int i = 0; i < 4; i++)
    {
        /* code */
        printf("the marks at index %dis %d\n",i, *ptr);
        *ptr++;
    } 
    
    

    return 0;
}
