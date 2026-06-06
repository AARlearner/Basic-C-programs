#include <stdio.h>

int maze(int cr, int cc, int er, int ec) {
    // Base case: reached destination
    if (cr == er && cc == ec) return 1;

    int rightways = 0;
    int downways = 0;

    // Move right if within bounds
    if (cc < ec) {
        rightways = maze(cr, cc + 1, er, ec);
    }

    // Move down if within bounds
    if (cr < er) {
        downways = maze(cr + 1, cc, er, ec);
    }

    return rightways + downways;
}

int main() {
    int a, b;
    printf("Enter the rows: ");
    scanf("%d", &a);
    printf("Enter the columns: ");
    scanf("%d", &b);

    int noOfways = maze(1, 1, a, b);
    printf("Number of ways: %d\n", noOfways);

    return 0;
}
