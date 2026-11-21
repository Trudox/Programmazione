#include <stdio.h>

#define DIM 20

int main(){
    char s1[DIM], s2[DIM];
    int i;
    scanf("%s", s1);
    for (i = 0; s1[i] != 0; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0'; 
    printf("%s\n",s2);
}