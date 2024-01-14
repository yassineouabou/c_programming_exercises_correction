#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void menu(){
    printf("\nChoisir votre operation : \n");
    printf("1. Saisir. \n2. Afficher. \n3. Inverser. \n4. Compte les mots.\n5. Quitter. \n");
}

char *saisir(){
    char *T;
    T = (char*)malloc(50*sizeof(char));
    printf("\nDonnez la chaine: ");
    getchar();
    gets(T);
    return T;
}

void Afficher(char *s){
    printf("votre chaine est: %s",s);
}

char* Inverser(char *T){
    char *CH;
    int i,j;
    CH = (char*)malloc(strlen(T)*sizeof(char));
    strcpy(CH,T);
    for (i = 0; i <strlen(T); i++){
       T[strlen(T)-1-i] = CH[i];
    }
    return T;
}
int Compte(char *T){
    int i,cmp;
    cmp=0;
    for ( i = 0; i < strlen(T); i++)
    {
        if(T[i]!=' ' && T[i]!='\n' && T[i]!='\t')
            cmp++;
    }
    printf("la longeur '%s' est: %d",T,cmp);
}

int main(){
    char *T,*tmp;
    int choix;
    tmp=(char*)malloc(50*sizeof(char));
    do
    {
        menu();
        printf("Votre Choix: ");
        scanf("%d",&choix);
        switch (choix)
        {
        case 1:
            system("cls");
            T = saisir();
            break;
        
        case 2:
            system("cls");
            Afficher(T);
            break;
        
        case 3:
            system("cls");
            tmp=Inverser(T);
            strcpy(T,tmp);
            break;
        
        case 4:
            system("cls");
            Compte(T);
            break;
        case 5:
           
            break; 
        default:
            break;
        }
                        
    } while (choix!=5);
    free(T);
    free(tmp);
    return 0;
}