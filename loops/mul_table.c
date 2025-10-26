#include <stdio.h>

int main(void) {
    int n ;
    printf("enter a number:");
    scanf("%d",&n);
    for (int i = 0; i < 11; i++)
    {
        printf("%d x %d=%d\n",n,i,n*i);
    }
    

    return 0;  // End of program
}
