#include<stdio.h>

int main(){
    int i,j,k;
    for (i = 0; i < 10; i++)
    {
        for (k = 0; k<i ; k++)
            printf(" ");
        for (j = i; j < 10; j++)
            printf("%d",i);
        printf("\n");   
    }
    for (i = 6; i >=1; i--)
    {
        for (j = i; j >= 1; j--){
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}