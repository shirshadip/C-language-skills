#include <stdio.h>


int fib(int n){
    if (n <= 1)
    {
        /* Base cases: f(0) = 0, f(1) = 1 */
        return n;
    }
    else {
        return fib(n-1)+fib(n-2);
    }
    
}
int main(void){
    printf("%d",fib(2));
    return 0;
}