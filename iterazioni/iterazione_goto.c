#include <stdio.h>

int main(){
    int i=0;
    int j=0;
    int L;
    printf("Inserire numero: ");
    scanf("%d",&j);
    printf("Inserire lughezza: ");
    scanf("%d",&L);
stella:
    if(j>0){
        if(i==0){
            printf("8");
            i++;
        }
        if(i>0 && i<L){
            printf("=");
            i++;
        }
        if(i==L){
            printf("D\n");
            i=0;
            j--;
        }
        goto stella;
    }
}
