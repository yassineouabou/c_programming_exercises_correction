#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void formausuel(){
    float T[3][4],S=0;
    int i,j;
    for(i=0; i<3; i++)
        for(j=0; j<4; j++){
        printf("T[%d][%d] = ",i,j);
        scanf("%f",&T[i][j]); 
        }
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
        printf("%.2f ",T[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
        S+=T[i][j];
    printf("la somme des elements du tableau: %.2f",S);
}
void formapointeur(){
    float **T,S=0;
    int i,j;
    T=(float**)malloc(3*sizeof(float*));
    for(i=0; i<4; i++){
        *(T+i)=(float*)malloc(4*sizeof(float));
    }
     for(i=0; i<3; i++)
        for(j=0; j<4; j++){
        printf("T[%d][%d] = ",i,j);
        scanf("%f",*(T+i)+j); 
    }
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
        printf("%.2f ",*(*(T+i)+j));
        }
        printf("\n");
    }
    for(i=0; i<3; i++)
        for(j=0; j<4; j++)
            S+= *(*(T+i)+j);
    printf("la somme des elements du tableau: %.2f",S);

}
int main(){
    
    int op;
    printf("1-formalisme usuel.\n2-formalisme pointeur\n");
    printf("choisez une foramlisme: ");
    scanf("%d",&op);
    if(op==1)
    formausuel(); 
    if(op==2)
    formapointeur();
    return 0;
}