#include <stdio.h>

#define dim 10

int main(){
    int a[dim], dl, i;
    for(dl = 0; dl < dim; dl++){
        scanf("%d", &a[dl]);
        if(a[dl] == 0)
            break;
    }
    for(i = 0; i < dl; i++){
        int m = a[i], j = i;
        while(a[j] * a[j] < a[j-1] * a[j - 1]){
            a[j] = a[j-1];
            j--;
        }
        a[j] = m;
    }
    for(i = 0; i < dl; i++)
        printf("%d\n", a[i]);
}