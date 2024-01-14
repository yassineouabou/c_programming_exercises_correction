#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Panneau{
float lar, lon, epa;
int type;
}Panneau;
void Saisie(Panneau P[], int t){
int i;
printf("\n\nVeuillez saisir les informations des panneaux: \n");
for(i=0; i<t; i++){
printf("<------ Panneau %d ------> \n",i+1);
printf("Largeur: ");
scanf("%f",&P[i].lar);
printf("Longeur: ");
scanf("%f",&P[i].lon);
printf("Epaisseur: ");
scanf("%f",&P[i].epa);
do{
printf("Type du bois: \n 0: Pin \n 1: Chene \n 2: Hetre \n----> ");
scanf("%d",&P[i].type);
}while(P[i].type != 0 & P[i].type != 1 & P[i].type != 2);
printf("\n");
}
}
void Afficher(Panneau P[], int t){
int i;
printf("\n\nLes informations saisis sont: \n");
for(i=0; i<t; i++){
printf("<------ Panneau %d ------> \n",i+1);

printf("Largeur: %.2f mm \n",P[i].lar);
printf("Longeur: %.2f mm \n",P[i].lon);
printf("Epaisseur: %.2f mm \n",P[i].epa);
printf("Type du bois: ");
if(P[i].type == 0) printf("Pin \n");
else if(P[i].type == 1) printf("Chene \n");
else if(P[i].type == 2) printf("Hetre \n");
printf("\n");
}
}
float Calcul_Volume(Panneau P){
float Volume;
Volume = P.lar * P.lon * P.epa;
return Volume;
}
int main(){
    int n,i;
    Panneau T[10];
    printf("Donner le nombre des panneaux: ");
    scanf("%d",&n);
    Saisie(T,n);
    Afficher(T,n);
    do{
    printf("Donner le numero de panneau souhaiter pour calculer le volume: ");
    scanf("%d",&i);
    }while(i<=0 || i>n);
    printf("Le Volume de cette panneau est: %.2f m³ \n",
    Calcul_Volume(T[i-1]) );
}
