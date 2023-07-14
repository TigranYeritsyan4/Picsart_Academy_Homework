#include <stdio.h>

int main() {
    char sym = 0;

    do
    {
	printf("Enter upper letter : ");
	scanf(" %c", &sym);
        if (sym >= 65 && sym <= 90) {
            printf("Lower letter : %c\n", sym + 32);
	    break;
        } else {
       	    printf("Your symbol is not a letter.\n");
        }
    }
    while (sym < 65 || sym > 90);

    return 0;
}
