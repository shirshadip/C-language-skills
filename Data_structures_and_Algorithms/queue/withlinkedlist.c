#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *front = NULL, *rear = NULL;

void enqueue(int x) {
    struct node *n = malloc(sizeof(struct node));
    n->data = x;
    n->next = NULL;

    if (rear == NULL)
        front = rear = n;
    else {
        rear->next = n;
        rear = n;
    }
    printf("%d inserted\n", x);
}

void dequeue() {
    if (front == NULL)
        printf("Queue Empty\n");
    else {
        struct node *temp = front;
        printf("%d removed\n", temp->data);
        front = front->next;
        free(temp);
    }
}

int main() {
    enqueue(5);
    enqueue(15);
    dequeue();
    return 0;
}
