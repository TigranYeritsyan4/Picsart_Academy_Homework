#include <stdio.h>

int main() {

    int x = 0;
    int y = 0;
    printf("Enter first number : ");
    scanf(" %d", &x);
    printf("Enter second number : ");
    scanf(" %d", &y);

    if (x > y) {
    	printf("%d greater than %d.\n", x, y);
    } else if (y > x) {
	printf("%d greater than %d.\n", y, x);
    } else {
	printf("Equal numbers.\n");
    }    
}

