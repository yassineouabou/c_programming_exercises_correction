#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct etudiant{
    char nom[15], prenom[15];
    int CNE;
    float notes[4], moyenne;
};

int main(){
    struct etudiant T[5],tem;
    int j,i;
    float S,max;
    for (i = 0; i < 5; i++)
    {
        S = 0;
        printf("<------ Etudiant %d ------> \n",i+1);
        printf("Nom: ");
        scanf(" %s",T[i].nom);
        printf("Prenom: ");
        scanf(" %s",T[i].prenom);
        printf("CNE: ");
        scanf("%d",&T[i].CNE);
        for(j=0; j<4; j++){
            printf("Note[%d] = ",j+1);
            scanf("%f",&T[i].notes[j]);
            S = S + T[i].notes[j];
        }
        T[i].moyenne = S / 4;
        printf("\n");
    }
    printf("\n\n");
    printf("Les informations saisis sont: \n");
    for(i=0; i<5; i++){
        printf("<------ Etudiant %d ------>\n",i+1);
        printf("Nom: %s \n",T[i].nom);
        printf("Prenom: %s \n",T[i].prenom);
        printf("CNE: %d \n",T[i].CNE);
        for(j=0; j<4; j++) 
            printf("Note[%d] = %.2f \n", j+1,T[i].notes[j]);
        printf("Moyenne = %.2f \n", T[i].moyenne);
        printf("\n");
    }
    max=T[0].moyenne;
    for(i=0; i<5; i++){
        if(T[i].moyenne>max)
            max=T[i].moyenne;
    }
    for(i=0; i<5; i++){
        if(T[i].moyenne==max){
            printf("L'etudiant ayant la plus grand moyenne:\n");
            printf("Nom: %s \n",T[i].nom);
            printf("Prenom: %s \n",T[i].prenom);
            printf("CNE: %d \n",T[i].CNE);
            for(j=0; j<4; j++) 
                printf("Note[%d] = %.2f \n", j+1,T[i].notes[j]);
            printf("Moyenne = %.2f \n", T[i].moyenne);
            printf("\n");
            break;
        }
    }
    for(i=0; i<5; i++){
        for (j = i+1; i < 5; i++)
        {
            if(T[i].moyenne<T[j].moyenne){
                tem=T[i];
                T[i]=T[j];
                T[j]=tem;
            }
        } 
    }
    printf("\n\n");
    printf("Trie en ordre decroissant: \n");
    for(i=0; i<5; i++){
        printf("<------ Etudiant %d ------>\n",i+1);
        printf("Nom: %s \n",T[i].nom);
        printf("Prenom: %s \n",T[i].prenom);
        printf("CNE: %d \n",T[i].CNE);
        for(j=0; j<4; j++) 
            printf("Note[%d] = %.2f \n", j+1,T[i].notes[j]);
        printf("Moyenne = %.2f \n", T[i].moyenne);
        printf("\n");
    }
    
    return 0;
}