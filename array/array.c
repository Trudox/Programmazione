#include<stdio.h>

#define dim 10

int main(){
    int a[dim];
    for(int i = 0; i < dim; i++){
        a[i] = i;
        printf("%d\n",a[i]);
    }
}