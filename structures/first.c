#include <stdio.h>
#include <string.h>
struct employee
{
    /* data */
    int code ;
    float salary;
    char name[67];


};


int main() {
    // Your code goes here
    struct employee e1 ;
    {
        /* data */
        e1.code= 33;
        e1.salary=45.66;
        strcpy(e1.name,"shirsha");
        printf("%d %f %s",e1.code,e1.salary,e1.name);
    };
    
    

    return 0; // Indicates successful program execution
}
