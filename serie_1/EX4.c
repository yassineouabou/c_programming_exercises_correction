#include<stdio.h>
int main(){
    float Pinitial,Pfinal,remise;
    printf("saisir le prix d'un produit: ");
    scanf("%f",&Pinitial);
    if(Pinitial<100)
        remise = (Pinitial*30)/100;
    
    else if(Pinitial>100 && Pinitial<200)
        remise = (Pinitial*40)/100;
    
    else if(Pinitial>200)
        remise = ((Pinitial*50)/100);
    
    Pfinal = Pinitial - remise;

    printf("< Prix Initial: %.2fDH, Remise: %.2fDH, Prix Finale: %.2fDH >.",Pinitial,remise,Pfinal);
    return 0;
}