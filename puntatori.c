#include<stdio.h>

int divisione(int dividendo, int divisore, int *a, int *b){
    if(dividendo == 0){
        return 1;
    }
    if (dividendo>100)
        return 2;
    *a = dividendo/divisore;
    *b = dividendo%divisore;
    return 0;   //tutto ok divisione per 0; 1 V 0 F in C, 1 F 0 V in Unix 
}

int main(){
    int quoziente, resto;
    switch (divisione(2000,2,&quoziente,&resto)){

        case 0:
            printf("Quoz: %d Resto: %d\n", quoziente, resto);
            return 0;
        case 1: 
            printf("Dividendo per 0\n");
            return 1;
        case 2: 
            printf("Dividendo>100\n");
            return 2;
    }
}