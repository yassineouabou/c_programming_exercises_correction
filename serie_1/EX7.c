#include<stdio.h>

int main(){
    int i,nbr,nbr_totale,pairs;
    //question 1
    for (i = 0; i < 5; i++)
    {
        printf("saisir le nombre numero %d: ",i+1);
        scanf("%d",&nbr);
        if(nbr%2==0)
            printf("le carre de %d est %d.\n",nbr,nbr*nbr);
    }
    //question 2
    printf("saisir une series des nombres: \n");
    nbr_totale=0;
    pairs = 0;
    scanf("%d",&nbr);
    while(nbr!=100){
        nbr_totale++;
        if(nbr%2==0){
            printf("le carre de %d est %d.\n",nbr,nbr*nbr);
            pairs++;
        }
        scanf("%d",&nbr);
    }
    printf("le nombre totale d entrer: %d.\n",nbr_totale);
    printf("le nombre d entrer pair: %d.",pairs);

    return 0;
}