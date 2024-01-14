#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lecteur(char *nom){
    printf("Donnez un nom (Entrez fin si vous avez terminer) : ");
    scanf("%s",nom);
    return strlen(nom);
}

int comparaison(char *s,char *t){
    return strcmp(s,t);
}

int main(){
    char nom[20];
    int nbrchar,cmp;
    cmp=0;
    do{
        nbrchar = lecteur(nom);
        if(nbrchar>10)
            cmp++;
    }while(comparaison(nom,"fin") != 0);
    printf("\nLe nombre de mots dont une taille plus de 10 est : %d",cmp);

    return 0;
}