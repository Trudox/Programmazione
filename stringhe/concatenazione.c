#include <stdio.h>

#define DIM 20

int main() {
    char s1[DIM], s2[DIM], s3[DIM * 2];
    int i = 0, j = 0;

    scanf("%19s%19s", s1, s2);

    while (s1[i] != '\0') {
        s3[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0') {
        s3[i] = s2[j];
        i++;
        j++;
    }

    s3[i] = '\0'; // Fondamentale!

    printf("%s\n%s\n%s\n", s1, s2, s3);
    return 0;
}