#include <stdio.h>
#include <iostream>
using namespace std;
struct Rect{
int lenght ;
int breadth;

};
int main(){
    struct Rect r;
    r.breadth=156;
    r.lenght=20;
    cout<<"the area is ->"<<r.lenght*r.breadth<<endl;
    
    return 0;
}