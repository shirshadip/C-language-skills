#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p;
    p = &a;
    cout << p << endl;
    cout << a << endl;
    cout << &a << endl;
    printf("%p", p);
    return 0;
}
