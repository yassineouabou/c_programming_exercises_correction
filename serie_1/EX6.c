#include<stdio.h>
int main(){
    int nbr,i;
    printf("saisir un nombre: ");
    scanf("%d",&nbr);
    if(nbr%2==0){
        printf("%d est un nombre pair.\n",nbr);
        printf("les nombres pairs qui sont inferieurs a %d:\n",nbr);
        for(i=2;i<nbr;i++)
            if(i%2==0)
                printf("%d\t",i);
    }
    else printf("%d est un nombre impair.",nbr);
    return 0;
}