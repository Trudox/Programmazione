#include<stdio.h>

int main(){
    int a;
    int i = 0;
    int somma = 0;
    int max = 0, min = 101; //stampare max min media e somma 
    do{
        scanf("%d",&a);
        if(a>=1 && a<=100){
            i++;
            somma = somma + a;
            if(a>max){
                max = a;
            }
            else if(a<min){
                min = a;
            }
        }
        else
            printf("Inserire un numero compreso fra 1 e 100\n");
    }while(a != 0);
    printf("Somma di tutti i numeri inseriti = %d\n",somma);
    printf("Media di tutti i numeri inseriti = %f\n",(float)somma/i);
    printf("Il max è = %d\n",max);
    printf("Il min è = %d\n",min);
}