#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int occurrance(char EXP[],char mot[]){
    int i,j,occ=0;
    int trouve=0;
    for(i=0;i<strlen(EXP);i++){
        if(EXP[i]==mot[0])
            for ( j = 0; j < strlen(mot); j++)
            {
                if(EXP[i+j]==mot[j]){
                    trouve=1;
                }
                else{
                    trouve=0;
                    break;
                }
            }
        if(trouve==1){
            occ++;
        }
        trouve=0;
    }
    return occ;

}

int main(){
    char EXP[100],mot[20];
    printf("donner une phrase: ");
    gets(EXP);
    printf("donner mot chercher: ");
    scanf("%s",mot);
    printf("occuronce de mot %s est: %d",mot,occurrance(EXP,mot));
    
    return 0;
}