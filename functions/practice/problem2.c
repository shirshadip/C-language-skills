#include <stdio.h>
float c2f(float c );
float c2f(float c){
    return (9.0/5.0)*c+32;
}
int main(void) {
    float c=45;
    printf ("celcius to ferenhite is %f\n",c2f(c));
    return 0;
}
