// arrrow operator 
#include <stdio.h>
typedef struct emp{
    int salary ;
    char score ;

}employee;
int main (){
    employee e1 ;
    employee *ptr1=&e1;
    ptr1->salary=50000;
    printf ("the salary of employee is %d",ptr1->salary);
    return 0;
}