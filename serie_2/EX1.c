#include<stdio.h>

void saisir(int n, int T[]){
    int i;
    printf("saisir les elements: \n");
    for (i = 0; i < n; i++)
        scanf("%d",&T[i]);
    
}
void affichage(int n ,int T[]){
    int i;
    for (i = 0; i < n; i++)
        printf("%d\t",T[i]);
}
void Max(int n,int T[]){
    int i,max,j,T2[20],m;
    max=T[0];
    for (i = 1; i < n; i++)
        if(max<T[i])
            max=T[i];
    m=n;
    for (i = 0,j=0; i < m;j++, i++){
        if(T[i]==max){
            i++;
            n--;
        }
        T2[j]=T[i];
    }
    affichage(n,T2);
}
void Min(int n,int T[]){
    int i,min,j,T1[20],m;
    min=T[0];
    for (i = 1; i < n; i++)
        if(min>T[i])
            min=T[i];
    m=n;
    for (i = 0,j=0; i < m;j++, i++){
        if(T[i]==min){
            i++;
            n--;
        }
        T1[j]=T[i];
    }
    affichage(n,T1);
}
void Ajouter(int n ,int T[]){
    int i,j,N,pos,T3[20];
    printf("\nsaisir element a ajouter: ");
    scanf("%d",&N);
    printf("\ndonner la position: ");
    scanf("%d",&pos);
    for (i = 0,j=0; i <n ;j++,i++)
    {
        if(i==pos-1){
            T3[pos-1]=N;
            j++;
            n++;
        }
        T3[j]=T[i];
    }
    
    affichage(n,T3);
}

int main(){
    int tab[20],n;
    printf("donner la taille de tableau: ");
    scanf("%d",&n);
    saisir(n,tab);
    affichage(n,tab);
    printf("\n");
    printf("\napres supression du max: \n");
    Max(n,tab);
    printf("\napres la supression du min: \n");
    Min(n,tab);
    Ajouter(n,tab);
    return 0;
}