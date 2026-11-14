#include <stdio.h>

#define dim 20

//Stringa da minuscolo a MAIUSCOLO
/*
int main(){
    char s[dim];
    scanf("%s", s);
    int i = 0;
    for(i = 0; i < dim; i++){
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;
    }
    printf("%s\n", s);
}
*/
//Confronto ordine alfabetico fra due stringhe
/*
int main(){
    char s1[dim], s2[dim];
    int i = 0;
    scanf("%s%s", s1, s2);
    while(s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i]){
        i++;
    }
    if(s1[i] == s2[i])
        printf("%s e %s sono uguali\n", s1, s2);
    else if(s1[i] < s2[i])
        printf("%s precede %s\n", s1, s2);
    else
        printf("%s precede %s\n", s2, s1);
}
*/
//Carattere in stringa

int main(){
    char c, s[dim];
    int i = 0;
    scanf("%c%s", &c, s);
    while(s[i] != 0 && c != s[i])
        i++;
    if(c == s[i])
        printf("'%c' è prensente nell stringa %s\n", c, s);
    else
        printf("'%c' NON è prensente nell stringa %s\n", c, s);
}