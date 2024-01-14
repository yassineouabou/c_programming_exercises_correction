#include<stdio.h>

void initialisation(char CH1[],char CH2[]){
    printf("sisair chaine de caracters 1: ");
    gets(CH1);
    printf("sisair chaine de caracters 2: ");
    gets(CH2);
}
int longueur_chaine1(char CH[]){
    char *P;
    int n=0;
    for ( P = CH; *P!='\0'; P++)
        n++;
    return n;
}
int main(){
    char cTab1[50],cTab2[50];
    initialisation(cTab1,cTab2);
    printf("longueur de chaine 1: %d\n",longueur_chaine1(cTab1));
    printf("longueur de chaine 2: %d\n",longueur_chaine1(cTab2));

    return 0;
}