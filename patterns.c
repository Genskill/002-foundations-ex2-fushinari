#include <stdio.h>
#include <cs50.h>

int main()
{
    int p = get_int("Enter type of pattern (1 or 2) ");
    int n = get_int("Number of rows");
    int i = 0, j = 0;

    if (p == 1) {
        while (n != 0) {
            for (j = 0; j < n; j++) {
                printf("#");
            }
            printf("\n");
            n--;
        }
    } else if (p == 2) {
        while (n != 0) {
            i++;
            n--;
            for (j = 0; j < n; j++) {
                printf(" ");
            }
            for (j = 0; j < i; j++) {
                printf("#");
            }
            printf("\n");
        }
    }

    return 0;
}
