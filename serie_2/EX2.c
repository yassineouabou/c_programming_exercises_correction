#include<stdio.h>
#include<stdlib.h>

void saisir(int tab[5][5]){
    int i,j;
    for (i = 0; i < 5; i++)
        for ( j = 0; j < 5; j++)
        {
            printf("iMat[%d][%d] = ",i+1,j+1);
            scanf("%d",&tab[i][j]);
        }
}
void affiche_matrice(int tab[5][5]){
    int i,j;
    for (i = 0; i < 5; i++){  
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",tab[i][j]);
        }
        printf(" \n");
    }
}

int main(){
    int iMat[5][5];
    saisir(iMat);   
    affiche_matrice(iMat);
}
