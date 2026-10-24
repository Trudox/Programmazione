#include <stdio.h>

int main(){

    char a, b;
    scanf("%c%c",&a,&b);
    if(a>=65 && a<=90){
        printf("Il carattere: %c, è MAIUSCOLO\n",a);
    }
    else if(a>=97 && a<=122){
        printf("Il carattere: %c, è minuscolo\n",a);
    }
    else
        printf("Il carattere: %c, è altro\n",a);
}