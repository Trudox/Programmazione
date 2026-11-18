#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a, min = 1, max = 6;
	srand(time(NULL));
	for(int i = 0; i < max; i++){
		a = min + rand() % (max - min + 1);
		printf("%d\n", a);
	}
	return 0;
}
