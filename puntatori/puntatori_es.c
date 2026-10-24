#include <stdio.h>

void swap(int *p,int *v){
    if(*p>*v){
        int t = *p;
        *p = *v;
        *v = t;
    }
}

int main(){

    int a, b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d %d\n",a,b);
}