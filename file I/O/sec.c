// arrrow operator 
#include <stdio.h>

int main (){
    FILE *fptr;
    fptr = fopen ("b.txt","w");
    fprintf (fptr,"hello world");
    fclose (fptr);
    return 0;
    fptr= fopen ("b.txt","r");
    char str[20];
    fscanf (fptr,"%s",str);
    printf ("the string read from file is %s",str);
    fclose (fptr);
    return 0;
}