#include<stdio.h>
float va(float a){
    if(a < 0)
        return -a;
    return a;
}
float radiceN(float a, int N){
    float x = 1, p;
    do{
        p = 1;
        for(int i = 0;i < N - 1;i++){
            p = p * x;
        }
        x = ((N - 1) * p * x + a)/(N * p);
    }while(va(p * x - a)/a>10e-5);
    return x;
}
int main(){
    float y = 1;
    int M = 1;
    do{
        printf("Inserire numero reale > 0: ");
        scanf("%f",&y);
        printf("Inserire numero intero > 0: ");
        scanf("%d",&M);
    }while(y <= 0 && M <= 0);
    for(int i=2;i<=M;i++){
        printf("%f\n",radiceN(y,i));
    }
}