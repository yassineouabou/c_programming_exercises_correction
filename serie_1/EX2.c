#include<stdio.h>

int main(){
    int age;
    char genre;
    do{
        printf("saisir votre genre (H:Homme, F:Femme): ");
        scanf(" %c",&genre);
    }while(genre!='H' && genre!='F');
    printf("saisir votre age: ");
    scanf("%d",&age);
    if((genre == 'H' && age>20) || (genre=='F' && age>18 && age<35))
        printf("paient l'impot.");
    return 0;
}