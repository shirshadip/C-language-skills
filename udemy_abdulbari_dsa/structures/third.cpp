#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
struct student {
    int roll;
    char name [25];
    char dept [15];
    char address [10];


};
int main(){
    struct student s ;
    strcpy(s.name, "shirshadip");
    strcpy(s.dept, "cs");
    strcpy(s.address, "sodepur");
    s.roll=10;
    
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Dept: " << s.dept << endl;
    cout << "Address: " << s.address << endl;
    return 0;
}