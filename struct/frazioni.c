#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int num;
    int den;
} Frazione;

int MCD(int a, int b){                    //Algoritmo di Euclide
    if (a = 0)
    {
        return 1;
    }
    
    if(a < 0)
        a = -a;
    if(b < 0)
        b = -b;
    while(a != b){
        if(a < b)
            b = b - a;
        else
            a = a - b;
    }
    return a;
}

Frazione frazione(int num, int den){    //funzione di accesso alla memoria 
    Frazione f;
    if(den == 0){
        printf("Divisione per 0\n");
        exit(1);
    }
    int m = MCD(num,den);               //Invariante
    f.num = num/m;
    f.den = den/m;
    return f;
}

int num(Frazione f){
    return f.num;
}

int den(Frazione f){
    return f.den;
}

Frazione leggiFrazione(){               //API
    int n, d;
    scanf("%d%d", &n, &d);
    return frazione(n, d);
}

void stampaFrazionaria(Frazione f){     //API
    printf("%d/%d\n",num(f),den(f));
}

void stampaDecimale(Frazione f){
    printf("%f\n", (float)num(f)/den(f));
}

Frazione somma(Frazione f1, Frazione f2){
    return frazione(num(f1) * den(f2) + num(f2) * den(f1), den(f1) * den(f2));
}

Frazione opposto(Frazione f){
    
}

Frazione sottrazione(Frazione f1, Frazione f2){

}

Frazione prodotto(Frazione f1, Frazione f2){
    return frazione(num(f1) * num(f2), den(f1) * num(f2));
}

Frazione inverso(Frazione f){
    return frazione(den(f), num(f));
}

Frazione quoziente(Frazione f1, Frazione f2){
    return prodotto(f1, inverso(f2));
}

int main(){
    Frazione f1, f2, f3;
    f1 = leggiFrazione();
    f2 = frazione(4,5);
    stampaFrazionaria(f1);
    stampaDecimale(f2);
    f3 = somma(f1, f2);
    return 0;
}
