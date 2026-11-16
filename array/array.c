#include<stdio.h>

#define dim 21

int main(){
    float a, b, c;
    float x[dim], y[dim];
    printf("Inserire 3 numeri reali: ");
    scanf("%f%f%f", &a, &b, &c);
    for(int i = 0; i < dim; i++){
        x[i] = -1.0 + (float)i/10;
        y[i] = a * (x[i] * x[i]) + b * x[i] + c;
        printf("[%f, %f]\n", x[i], y[i]);
        //printf("%f\n",x[i]); 
    }
    return 0;
}