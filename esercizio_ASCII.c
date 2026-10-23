#include <stdio.h>

int main(){
    char c;
    do{
        scanf(" %c",&c);
        if(c>=48 && c<=57){
            printf("Numero\n");
        }
        else if(c>=65 && c<=90){
            printf("Il carattere: %c, è MAIUSCOLO\n",c);
        }
        else if(c>=97 && c<=122){
            printf("Il carattere: %c, è minuscolo\n",c);
        }
        else{
            printf("Il carattere: %c, è altro\n",c);
        }
    }while(c != 48);
}