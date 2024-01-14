#include<stdio.h>
int main(){
    int n,nbr_valeur;
    int som,min;
    int som_pos,min_pos;
    printf("tapez suite des nombres entiers: \n");
    scanf("%d",&n);
    if(n==999)
        printf("suite vide");
    else{
        nbr_valeur=0;
        som = 0;
        som_pos=0;
        min = n;
        min_pos=n;
        while (n!=999){
            nbr_valeur++;
            som+=n;
            if(n<min)
                min=n;
            if(n>0){
                som_pos+=n;
                if(n<min_pos)
                    min_pos=n;
            } 
            scanf("%d",&n);  
        }
        printf("le nombre total de valeur de la suite: %d\n",nbr_valeur);
        printf("la somme des valeur lues: %d\n",som);
        printf("le minimun: %d\n",min);
        printf("la somme des valeur strictement positive: %d\n",som_pos);
        printf("la minimun des valeur strictement positive: %d\n",min_pos);
    }

    return 0;
}