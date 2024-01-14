#include<stdio.h>

int main(){
    int a,b,res;
    char op;
    printf("saisir deux nombres:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("donner l'operation: ");
    scanf(" %c",&op);
    switch(op){
        case '+': res=a+b;printf("La Somme %d + %d = %d",a,b,res);break;
        case '-': res=a-b;printf("La Soustraction %d - %d = %d",a,b,res);break;
        case '*': res=a*b;printf("Le Produit %d * %d = %d",a,b,res);break;
        case '/': 
            if(b==0)
                printf("Erreur!!!");
            else{
                res=a/b;
                printf("La Division %d / %d = %d",a,b,res);
            }
            break;

    }
    return 0;
}