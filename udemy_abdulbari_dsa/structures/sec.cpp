#include <stdio.h>
#include <iostream>
using namespace std;
struct complex
{
    int real;
    char img;

}; int main()
{
    struct complex i;
    struct complex r1;
    struct complex r2;
    r1.real = 5;
    r2.real = 10;
    i.img = 'i';

    cout << "the complex number is " << r1.real << "+" << i.img << r2.real << endl;
    return 0;
}