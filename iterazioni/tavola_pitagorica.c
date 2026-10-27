#include<stdio.h>

int main(){
    int lato;
    printf("lato?\n");
    scanf("%d",&lato);
    for(int i=0;i<=lato;i++){
        for(int j=0;j<=10;j++)
            printf("%3d ",i*j); //"%3d" allinea i numeri grandi fino a 3 cifre 
        printf("\n");
    }
}