// arrrow operator 
#include <stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen ("b.txt","a");
    fprintf (fptr,"hello world");
    fclose (fptr);
    fptr = fopen ("b.txt","r");
    char str[50];
    fscanf (fptr,"%s",str);
    printf("data appended to file successfully %s", str);
    fclose (fptr);
    return 0;
}