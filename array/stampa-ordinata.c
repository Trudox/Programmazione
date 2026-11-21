#include <stdio.h>

#define dim 10

int input(int *a){
    int dl;
    for(dl = 0; dl < dim; dl++){
        scanf("%d", a[dl]);
        if(a[dl] < 0)
            break;
    }
    return dl;
}

void stampa_ordinata(int *a, int max){
    int dl = 0, i = 1, m;
    while(i < max){
        if(a[i] < a[i-1])
            print("ciao"); //DA FINIRE
    }
}


int main(){
    int a[dim], dl;
    dl = input(a);
    stampa_ordinata(a,dl);
}