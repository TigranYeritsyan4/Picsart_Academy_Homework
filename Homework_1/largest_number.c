#include <stdio.h>

int main() {
    int x = 0;
    int y = 0;
    int z = 0;

    printf("Enter three numbers.\n");
    if (scanf("%d %d %d", &x, &y, &z) != 3) {
        printf("Invalid input. Please enter numbers only.\n");
        return 1;
    }

    if (x == y && y == z) {
        printf("All numbers are equal.\n");
    } else if (x >= y && x >= z) {
        printf("Largest number is %d.\n", x);
    } else if (y >= x && y >= z) {
        printf("Largest number is %d.\n", y);
    } else {
        printf("Largest number is %d.\n", z);
    }

    return 0;
}
