#include <stdio.h>

int bisestile(int A){
    if (A % 400 == 0 || (A % 4 == 0 && A % 100 != 0))
        return 0;
    else
        return 1;

}
int giorni_del_mese(int M, int A){
    int giorni_del_mese;
  if (M == 4 || M == 6 || M == 9 || M == 11)
    return giorni_del_mese = 30;
  else if (M == 2)
    if (A % 400 == 0 || (A % 4 == 0 && A % 100 != 0))
        return giorni_del_mese = 29;
    else
      return giorni_del_mese = 28;
  else
    return giorni_del_mese = 31;
}
int valida(){

}
int main(void) {
  int G, M, A;

  scanf("%d%d%d", &G, &M, &A);
  printf("L'anno è bisestile? (0=si,1=no)\n%d\n",bisestile(A));
  printf("Nel mese %d ci sono %d giorni",M,giorni_del_mese(M,A));
  /*
  if (G == 31 && M == 12)
    printf("%d %d %d\n", 1, 1, A + 1);
  else if (G == giorni_del_mese)  // ultimo giorno del mese
    printf("%d %d %d\n", 1, M + 1, A);
  else
    printf("%d %d %d\n", G + 1, M, A);*/
  return 0;
}