#include <stdio.h>

int main(void) {
    int a[3][2];

    // Taking input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Printing output
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {   // ✅ fixed here
            printf("The value of a[%d][%d] is %d\n", i, j, a[i][j]);
        }
    }

    return 0;
}
