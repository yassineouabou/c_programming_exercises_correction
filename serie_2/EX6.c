#include<stdio.h>
#include<string.h>
int main(){
    char TXT[100],*P;
    int cmpchif,cmpesp,cmpautre;
    cmpautre=0;
    cmpchif=0;
    cmpesp=0;
    printf("saisir un chaine de caracteres: ");
    gets(TXT);
    for (P = TXT; P < TXT +strlen(TXT); P++){
        if(*P =='\n' || *P =='\t' || *P ==' ')
            cmpesp++;
        else if((*P>='a' && *P<='z') || (*P>='A' && *P<='Z'))
            cmpchif++;
        else
            cmpautre++;
    }
    printf("Chiffres: %d\t Espacement: %d\t Autre: %d",cmpchif,cmpesp,cmpautre);
    
    
    return 0;
}