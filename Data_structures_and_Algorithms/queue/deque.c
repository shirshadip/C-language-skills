#include <stdio.h>
#define MAX 5

int dq[MAX], front = -1, rear = -1;

void insertFront(int x) {
    if (front == 0)
        printf("Cannot insert\n");
    else {
        if (front == -1) front = rear = 0;
        else front--;
        dq[front] = x;
        printf("%d inserted at front\n", x);
    }
}

void deleteFront() {
    if (front == -1)
        printf("Deque Empty\n");
    else {
        printf("%d deleted\n", dq[front]);
        front++;
    }
}

int main() {
    insertFront(10);
    insertFront(20);
    deleteFront();
    return 0;
}
