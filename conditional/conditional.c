#include <stdio.h>

int main(void) {
    
    
     int age ;
     printf("what is your age?--->\n");
     scanf("d",&age);
    if (age>18){
        printf("your age is greater than 18");
    }
    else if (age<10){
        printf("tu to baccha hai");
    }
    else if(age>60){
        printf ("tu to buddha hai ");
    }
    else{
        printf("your age is less than 18");
    }
    return 0;  // End of program
}
