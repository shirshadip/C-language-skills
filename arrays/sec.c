#include <stdio.h>

int main(void) {
    int marks [5];
    // printf("enter marks of five students\n");
    // scanf("%d",&marks[0]);
    // scanf("%d",&marks[1]);
    // scanf("%d",&marks[2]);
    // scanf("%d",&marks[3]);
    // scanf("%d",&marks[4]);
    for (int i = 0; i < 5; i++)
    {   printf("enter the marks no. %d->\n",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    
        {printf("the marks are---> %d\n",marks[i]);
        /* code */
    }
    
    
    return 0;
}
