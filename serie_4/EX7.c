#include<stdio.h>
int i, j;
typedef struct Produit{
    int Ref, Type, Qte;
    float Prix;
}Produit;
void Saisie_Affichage(Produit P[4]){
    printf("Veuillez saisir les donnees: \n");
    for(i=0; i<4; i++){
    printf("<------ Produit %d ------> \n",i+1);
    printf("Reference: ");
    scanf("%d",&P[i].Ref);
do{
    printf("Type du produit: \n 1: Cartes meres \n 2: Processeurs \n 3: Barettes memoire \n 4: Carte graphique \n----> ");
    scanf("%d",&P[i].Type);
}while(P[i].Type != 1 & P[i].Type != 2 & P[i].Type != 3 & P[i].Type != 4);
printf("Quantite: ");
scanf("%d",&P[i].Qte);
printf("Prix: ");
scanf("%f",&P[i].Prix);
printf("\n");
}
printf("\n\nLes informations saisis sont: \n");
for(i=0; i<4; i++){
    printf("<------ Produit %d ------> \n",i+1);
    printf("Reference: %d \n",P[i].Ref);
    printf("Type du produit: ");
    if(P[i].Type == 1) printf("Carte mere \n");
    else if(P[i].Type == 2) printf("Processeur \n");
    else if(P[i].Type == 3) printf("Barrettes memoire \n");
    else if(P[i].Type == 4) printf("Cartes graphique \n");
    printf("Quantite: %d \n",P[i].Qte);
    printf("Prix: %.2f DH \n",P[i].Prix);
    printf("\n");
}
}
void Commande(Produit T[4]){
    int type, qte;
    printf("\n\nSaisir votre commande SVP: \n");
    do{
        printf("Quel est le produit que vous voulez ? \n 1: Cartesmeres \n 2: Processeurs \n 3: Barettes memoire \n 4: Carte graphique \n----> ");
        scanf("%d",&type);
    }while(type != 1 & type != 2 & type != 3 & type != 4);

    printf("Quelle est la quantite ? \n----> ");
    scanf("%d",&qte);
    for(j=1; j<=4; j++)
    if(type == j)
    for(i=0; i<4; i++)
    if(T[i].Type == j){
    while(T[i].Qte < qte){
        printf("Malheureusement, La quantite disponible est insufisant ! \n");
        printf("Quelle est la quantite? \n----> ");
        scanf("%d",&qte);
    }
    printf("<------ Facture ------> \n");
    printf(" (: Notre boutique souhaite la bienvenue :) \n");
    printf("Le produit demander est: ");
    if(T[i].Type == 1) 
        printf("Carte mere\n");
    else if(T[i].Type == 2)
        printf("Processeur \n");
    else if(T[i].Type == 3)
        printf("Barrettes memoire \n");
    else if(T[i].Type == 4) 
        printf("Cartes graphique \n");
    printf("---> La Reference du produit: %d \n", T[i].Ref);
    printf("---> Le prix totoal est: %.2f DH \n", qte*T[i].Prix);
    }
}
int main(){
Produit T[4];
Saisie_Affichage(T);
printf("Voulez-vous effectuer une commande ? \n 1: Oui \n 0:Non \n----> ");
scanf("%d",&i);
if(i==1) 
    Commande(T);
}