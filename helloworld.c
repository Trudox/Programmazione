#include <stdio.h>

int valore_assoluto(int a){
    if (a<0)
        return -a;
    else 
        return a;
}
int controllo(int p){
    return !p? p:!p;
}
int massimo(int a,int b){
    return a>b? a:b;
}
int max3(int a,int b,int c){
    return massimo(massimo(a,b),c);
}
int max4(int a,int b, int c, int p){
    return massimo(max3(a,b,c),p);
}
int main () {
    int a,b,c;
    int p;
    printf("Inserisci un numero: ");
    scanf("%d%d%d%d", &a, &b, &c, &p);
    printf("Il valore assoluto di %d è %d\n", a, valore_assoluto(a));
    printf("p=%d, funzione p=%d, !p=%d\n",p,controllo(p),!p);
    printf("Max=%d\n",massimo(a,b));
    printf("Max di 3 numeri=%d\n",max3(a,b,c));
    printf("Max di 4 numeri=%d\n",max4(a,b,c,p));
    return 0;
}