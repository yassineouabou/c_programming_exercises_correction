#include<stdio.h>
int main(){
    int n,op;
    printf("1.Ajouter 2 \n");
    printf("2.Multiplier par 3\n");
    printf("3.Soustraire 5\n");
    printf("4.Quitter\n");
    printf("tapez un eniter entre 1 et 4: ");
    scanf("%d",&op);
    n=0;
    while (op!=4)
    {
        if(op==1)
            n+=2;
        else if(op ==2)
            n*=3;
        else if(op ==3)
            n-=5;
        else
            printf("operateur in vaalide!!!\n");
        printf("%d\n",n);
        printf("tapez un eniter entre 1 et 4: ");
        scanf("%d",&op);
    }
    

}