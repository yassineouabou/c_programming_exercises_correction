#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct date{
    int jour;
    char mois[10];
    int annee;
};

struct employe{
    char nom[15], prenom[15];
    struct date date_naissance, date_embauche;
};
int main(){
    struct employe Em[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("<------ Employe %d ------>\n",i+1);
        printf("Nom: ");
        scanf(" %s",Em[i].nom);
        printf("Prenom: ");
        scanf(" %s",Em[i].prenom);
        printf("Date de naissance (jour): ");
        scanf("%d",&Em[i].date_naissance.jour);
        printf("Date de naissance (mois): ");
        scanf(" %s",Em[i].date_naissance.mois);
        printf("Date de naissance (anne): ");
        scanf("%d",&Em[i].date_naissance.annee);
        printf("Date d'embauche (jour): ");
        scanf("%d",&Em[i].date_embauche.jour);
        printf("Date d'embauche (mois): ");
        scanf(" %s",Em[i].date_embauche.mois);
        printf("Date d'embauche (anne): ");
        scanf("%d",&Em[i].date_embauche.annee);
        printf("\n");
    }
    printf("Les informations des employes sont: \n");
    for(i=0; i<4; i++){
        printf("<------ Employe %d ------>\n",i+1);
        printf("Nom: %s\n",Em[i].nom);
        printf("Prenom: %s\n",Em[i].prenom);
        printf("Date de naissance: %d %s %d\n",
        Em[i].date_naissance.jour, Em[i].date_naissance.mois, Em[i].date_naissance.annee);
        printf("Date d'embauce: %d %s %d\n",
        Em[i].date_embauche.jour, Em[i].date_embauche.mois, Em[i].date_embauche.annee);
        printf("\n");
    }
    return 0;
}