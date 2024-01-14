#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int addition(int a,int b){
    return a+b;
}

int soustraction(int a,int b){
    return a-b;
}

int multiplication(int a,int b){
    return a*b;
}

float division(int a,int b){
    return a/b;
}

int main(){
    char EXP[40],N1[20],N2[20],op,choix;
    int i,j,A,B,R,pos_op;
    do{
    printf("\ndonner une expression arithmetique: ");
    scanf("%s",EXP);
    for (i = 0; i <strlen(EXP) ; i++)
        if(EXP[i]=='+' || EXP[i]=='-' || EXP[i]=='*' || EXP[i]=='/'){
            op = EXP[i];
            pos_op = i;
        }
    for (i = 0; i <pos_op ; i++)
        N1[i] = EXP[i];
    
     for (j=0,i = pos_op+1; i <strlen(EXP) ; j++,i++)
        N2[j] = EXP[i];

    A=atoi(N1);
    B=atoi(N2);
    switch(op){
        case '+': R=addition(A,B);printf("%d + %d = %d",A,B,R);break;
        case '-': R=soustraction(A,B);printf("%d - %d = %d",A,B,R);break;
        case '*': R=multiplication(A,B);printf("%d * %d = %d",A,B,R);break;
        case '/': 
            if(B==0) printf("ERREUR !!!");
            else {
                R=multiplication(A,B);
                printf("%d / %d = %d",A,B,R);}break;
    }
    }while(choix!='O');

    return 0;
}