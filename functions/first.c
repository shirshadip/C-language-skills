#include <stdio.h>
// function prototype
int sum (int , int );

// funtion definition
int sum (int x , int y ){
    printf ("the sum is %d\n",x+y);
    return x+y;
}


int main(void) {
     int a = 1;
     int b = 3;
     sum(a,b); // function call

    return 0;  // End of program
}
