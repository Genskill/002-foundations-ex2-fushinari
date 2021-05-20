#include <stdio.h>
#include <cs50.h>

int main()
{
    float s1 = get_float("side 1 ");
    float s2 = get_float("side 2 ");
    float s3 = get_float("side 3 ");
    float squaresum;

    if (s1 > s2 && s1 > s3) {
        squaresum = (s2 * s2) + (s3 * s3);
        if (squaresum == (s1 * s1)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    } else if (s2 > s1 && s2 > s3) {
        squaresum = (s1 * s1) + (s3 * s3);
        if (squaresum == (s2 * s2)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    } else if (s3 > s1 && s3 > s2) {
        squaresum = (s1 * s1) + (s2 * s2);
        if (squaresum == (s3 * s3)) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }

    return 0;
}
