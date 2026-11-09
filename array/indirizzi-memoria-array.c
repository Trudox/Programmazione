#include<stdio.h>

#define dim 4

int main()
{
    char parola[dim] = {'c', 'i', 'a', 'o'};
    //parola[1] = 'p';
    scanf(" %c",&parola[3]);
    for(int i = 0; i < dim; i++){
        printf("%c\n",parola[i]);
        printf("%p\n",&parola[i]);
        printf("%d\n",&parola[i]);
    }
}
