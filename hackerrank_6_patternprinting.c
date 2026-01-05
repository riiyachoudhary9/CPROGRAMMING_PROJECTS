#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 7; i++) {
        for (j = 1; j <= 7; j++) {

            if (i == 4 && j == 4)
                printf("1 ");
            else if (i >= 3 && i <= 5 && j >= 3 && j <= 5)
                printf("2 ");
            else if (i >= 2 && i <= 6 && j >= 2 && j <= 6)
                printf("3 ");
            else
                printf("4 ");
        }
        printf("\n");
    }

    return 0;
}
