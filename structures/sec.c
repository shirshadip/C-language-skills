#include <stdio.h>
#include<string.h>
typedef struct employee {
    int code ;
    float salary;
    char name[10] ;

}emp;

int main(){
    emp e1 ;
    e1.code=43;
    strcpy(e1.name,"shirshadip");
    printf("%d\n",e1.code);
    printf("%s",e1.name);

}