#include<stdio.h>
#include<stdlib.h>
typedef struct{
    int nb_elem;
    int *tab;
}TypeTableau;

TypeTableau Creation_Tab(int n){
    TypeTableau T;
    T.nb_elem = n;
    T.tab = (int*)malloc( T.nb_elem * sizeof(T) );
    return T;
}
void Simple_Lecture_Tab(TypeTableau T){
int i;
    printf("\nVeuillez remplir les elements du tableau: \n");
    for(i=0; i<T.nb_elem; i++){
    printf("T[%d] = ",i);
    scanf("%d",&T.tab[i]);
    }
}

void Affichage(TypeTableau T){
    int i;
    printf("Les elements du tableau sont: \n");
    for(i=0; i<T.nb_elem; i++) printf("%d\t", T.tab[i]);
}
TypeTableau Double_Tab(TypeTableau T){
    int i;
    TypeTableau M;
    M.nb_elem = T.nb_elem;
    M.tab = (int*)malloc( M.nb_elem * sizeof(M) );
    for(i=0; i<M.nb_elem; i++)
    M.tab[i] = 2 * T.tab[i];
    return M;
}
void Destruction_Tab(TypeTableau T){
    free(T.tab);
}
int main(){
    TypeTableau A;
    int n;
    printf("Donner la taille du tableau: ");
    scanf("%d",&n);
    A = Creation_Tab(n);
    Simple_Lecture_Tab(A);
    Affichage(A);
    A = Double_Tab(A);
    printf("\nApres le calcule du double: \n");
    Affichage(A);
    Destruction_Tab(A);
}