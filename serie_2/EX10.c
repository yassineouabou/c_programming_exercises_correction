#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void binaire(int T[],int N){
    int i;
    for(i=7;i>=0;i--){
    T[i]=N%2;
    N=N/2;
    }
}

int distanceNombre(int A,int B){
    int i,cmp,T1[8],T2[8];
    binaire(T1,A);
    binaire(T2,B);
    cmp=0;
    for (i = 0; i < 8; i++)
    {
        if(T1[i]!=T2[i])
            cmp++;
    }
    return cmp;
}

int distanceH(char *S1,char *S2){
   int i,cmp;
   cmp=0;
   for(i=0;i<strlen(S1);i++){
        if(S1[i]!=S2[i])
            cmp++; 
    }
return cmp;  
}

int distanceH_langage(char **L,int n){
int i,j,cmp,min;
cmp=0;
min=50;
for(i=0;i<n;i++){
    for (j = i+1; j < n; j++)
    {
        cmp=distanceH(L[i],L[j]);
        if(cmp<min)
            min=cmp;
    }
    }
    return min;   
}

int main(){
int i,n,N1,N2;
char *S1,*S2;
char **langage;

S1 = (char*)malloc(50*sizeof(char));
S2 = (char*)malloc(50*sizeof(char));

printf("donner la taille de table langage: ");
scanf("%d",&n);
langage=(char**)malloc(n*sizeof(char*));

for(i=0;i<n;i++){
    langage[i] = (char*)malloc(50*sizeof(char));
    printf("donner mot num %d: ",i+1);
    scanf("%s",langage[i]);
}
printf("La distance de Hamming de langage est : %d",distanceH_langage(langage,n));

do{
    printf("\ndonner chaine de caractere 1: ");
    scanf("%s",S1);
    printf("donner chaine de caractere 2: ");
    scanf("%s",S2);
    if(strlen(S1)!=strlen(S2))
        printf("les deux chaines de longeur defferent.");

}while(strlen(S1)!=strlen(S2));
printf("La distance de Hamming entre '%s' et '%s' est : %d",S1,S2,distanceH(S1,S2));
do{
printf("\ndonnez nombre 1: ");
scanf("%d",&N1);
}while(N1<0 || N1>255);
do{
printf("donnez nombre 2: ");
scanf("%d",&N2);
}while( N2<0 || N2>255);
printf("La distance de Hamming entre les nombres %d et %d est: %d",N1,N2,distanceNombre(N1,N2));
return 0;
}