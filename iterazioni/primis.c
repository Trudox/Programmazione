#include<stdio.h>

void input_int(int long long *a);
int primi(int long long n);
void stampa_primi(int long long n);
void tutti_primi(int long long n);
int main(){
    int long long n=1;
    while(n>0){
        input_int(&n);
        stampa_primi(n);
        //tutti_primi(n);        
    }
    return 0;
}

void input_int(int long long *a){
    printf("Inserire n intero: ");
    scanf("%lld",a);
}
int primi(int long long n){
    if (n<2)
        return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
void stampa_primi(int long long n){
    if(primi(n))
        printf("'%lld' è numero primo.\n",n);
    else
        printf("'%lld' NON è numero primo.\n",n);
}
void tutti_primi(int long long n){
    int acc=0;
    for(int i=0;i<n;i++){
        if(primi(i)){
            printf("%10d ",i);
            acc++;
            if(acc>10){
                printf("\n");
                acc = 0;
            }
        }
    }
    printf("\n");
}