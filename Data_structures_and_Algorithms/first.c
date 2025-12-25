#include <stdlib.h>
#include <stdio.h>
struct Node {
    int data ;
    struct Node *next;
};
// HEAD
//  ↓
// [data | next] → [data | next] → [data | NULL]
/*
🧪 Practice 1: Create & Traverse Linked List
*/

int main (){
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;


    //Alocate the memory 
    head = (struct Node*)malloc (sizeof(struct Node));
    second = (struct Node*)malloc (sizeof(struct Node));
    third = (struct Node*)malloc (sizeof(struct Node));
    printf ("%d,%d,%d\n",head,second,third);

    //Let assign data 
    head ->data=10;
    head ->next=second ;

    second->data=20;
    second->next=third ;

    third ->data= 30;
    third ->next=NULL;

    // Travesal 
    struct Node *temp = head ;
    while (temp!= NULL)
    {
        /* code */
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    

    return 0;
}