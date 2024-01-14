#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int nb_occurrence(char T[], int n, char c){
    int i, cmp=0, p_occ, d_occ;
    for(i=0; i<n; i++)
        if(T[i] == c){
            p_occ = i;
            break;
        }
    printf("p_occ = %d \n", p_occ);
    for(i=n; i>0; i--)
        if(T[i] == c){
            d_occ = i;
            break;
        }
    printf("d_occ = %d \n", d_occ);
    for(i=0; i<n; i++)
        if(T[i] == c) cmp++;
    return cmp;
}
int main(){
    int n;
    char c;
    char CH[10];
    printf("Donner la taille du tableau: ");
    scanf("%d",&n);
    printf("Saisir les caracteres: ");
    scanf(" %s",CH);
    printf("Donner le caracter a cherche: ");
    scanf(" %c",&c);
    printf("Le nombre des occuences est: %d",nb_occurrence(CH, n,c));
    return 0;
}