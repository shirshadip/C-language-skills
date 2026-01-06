#include <stdio.h>

int pq[5], size = 0;

void insert(int x) {
    pq[size++] = x;
}

void deleteHighest() {
    int max = 0;
    for (int i = 1; i < size; i++)
        if (pq[i] > pq[max])
            max = i;

    printf("%d removed\n", pq[max]);
    for (int i = max; i < size - 1; i++)
        pq[i] = pq[i + 1];
    size--;
}

int main() {
    insert(10);
    insert(30);
    insert(20);
    deleteHighest();
    return 0;
}
