#include <stdio.h>

int f(int d){
	int m[] = {2, 2, 3, 8, 1, 2};
	if(m[d] < 6 && m[d] > 1)
		return m[d];
	else
		return 0;
}

int main() {
  int a = 0, i[] = {1, 1, 1};
  while (a < 2)
    i[a] = f(++a);

  for (i[0] = 2; i[0] >= 0; i[0]--)
    printf("%d ", i[i[0]]);
  printf("\n");
  return 0;
}
