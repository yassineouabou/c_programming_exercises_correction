#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int rechercher(float *T,float N, int n){
    int i,trouve=0;
    for (i = 0; i < n ; i++)
    {
        if(T[i]==N){
            trouve =1;
            return i+1;
        }
    }
    if(trouve==0)
        return -1;
    
}

int main(){
    float *T,N;
    int n,i,pos;
    printf("donner la taille de tableau: ");
    scanf("%d",&n);
    T = (float*)malloc(n*sizeof(float));
    for(i = 0; i < n; i++){
        printf("T[%d] = ",i);
        scanf("%f",&T[i]);
    }
    printf("donner la valeur rechercher: ");
    scanf("%f",&N);
    pos=rechercher(T,N,n);
    if(pos!=-1)
        printf("la position de %.2f est: %d",N,pos);
    else
        printf("la valeur n'est pas exist.");
    

}