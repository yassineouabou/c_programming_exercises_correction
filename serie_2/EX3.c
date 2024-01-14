#include<stdio.h>
#include<stdlib.h>

void Nbr_jours(int n){
    int iNb_jours[13];
    int i;
    for (i = 1; i < 13; i++)
    {
        if(i==2)
            iNb_jours[i]=28;
        else if(i%2==0 && i<=7 || i%2!=0 && i>7)
            iNb_jours[i]=30;
        else    
            iNb_jours[i]=31;
    }
    printf("le nombre de jours de mois %d est: %d",n,iNb_jours[n]);
}

int main(){
    int mois;
    do{
        printf("saisir le nombre de mois: ");
        scanf("%d",&mois);
    }while(mois==0 || mois>12);
    Nbr_jours(mois);
    return 0;
}