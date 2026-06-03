#include <stdio.h>
#define N 10

int main() {
    int a[N], i, j, t;

    printf("Input %d numbers:\n", N);
    for (i = 0; i < N; i++) scanf("%d", &a[i]);

    // Bubble Sort
    for (i = 0; i < N-1; i++) {
        for (j = 0; j < N-1-i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("Sorted numbers:\n");
    for (i = 0; i < N; i++) printf("%d ", a[i]);

    return 0;
}