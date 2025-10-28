#include <stdio.h>


int change (int a );//prototype
int change (int a ){
    a = 77; //misnomer
    return 0;


}
int main(void)
{
    int b = 22;
    change(b);// b is 22
    printf("b is %d\n",b);
    return 0;
}
// b will not change 