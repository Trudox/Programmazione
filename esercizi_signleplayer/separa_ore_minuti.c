#include<stdio.h>

void separa_ore_minuti(int *ore, int *minuti){
    *ore = *minuti / 60;
    *minuti = *minuti % 60;
}
int main(){
    int m;
    int h;
    scanf("%d",&m);
    separa_ore_minuti(&h,&m);
    printf("%d : %d\n",h,m);
}