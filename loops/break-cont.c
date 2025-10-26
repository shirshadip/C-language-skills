#include <stdio.h>

int main(void) {
    for (int i = 0; i < 15; i++)
    {
        /* code */
        if (i==3){
            continue;
        }
        
        
        else if (i==5)
        {
            /* code */break;
        }
         
        printf ("i is %d\n",i);
    }
    printf("loop is done");

    return 0;  // End of program
}
