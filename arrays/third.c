#include <stdio.h>

int main(void) {
    int marks [3]={12,213,31};
    for (int i = 0; i < 3; i++)
    {
        printf("the marks of %d is --> %d\n",i+1,marks[i]);
    }
    int marks2[]={12,213,31};
// also valid 
    for (int j = 0; j < 3; j++)
    {
        printf("the marks of %d is --> %d\n",j+1,marks2[j]);
    }
    
    return 0;
}