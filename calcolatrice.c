#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %c%d",&a,&c,&b);
    switch(c){
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a * b);
            break;
        case '/':
            if(b==0)
            {
                printf("gay\n");
                break;
            }
            printf("%d / %d = %d\n",a,b,a * b);
            break;
        case '%':
            if(b==0)
            {
                printf("gay\n");
                break;
            }
            printf("Il resto di %d / %d = %d\n",a,b,a * b);
            break;
    }
}