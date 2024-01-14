#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    char nom[15], prenom[15];
    int Tele;
}Repertoire;
void Afficher(Repertoire A[], int t){
    int i, j;
    printf("Les donnees saisis sont: \n");
    for(i=0; i<t; i++){
        printf("\t  Enregistrement %d  \n",i+1);
        printf("Nom: %s \n",A[i].nom);
        printf("Prenom: %s \n",A[i].prenom);
        printf("Tele: %d \n",A[i].Tele);
        printf("\n");
    }
}
int main(){
int i, j, n;
    printf("Donner le nombre des enregistrements: ");
    scanf("%d",&n);
    Repertoire T[n];
    printf("\n\nVeuillez saisir les donnees: \n");
    for(i=0; i<n; i++){
        printf("\t  Enregistrement %d \n",i+1);
        printf("Nom: ");
        scanf(" %s",T[i].nom);
        printf("Prenom: ");
        scanf(" %s",T[i].prenom);
        printf("Tele: ");
        scanf("%d",&T[i].Tele);
        printf("\n\n");
    }
    Afficher(T,n);
}