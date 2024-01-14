#include<stdio.h>

int main(){
    int N,i,premier;
    printf("donner un nombre: ");
    scanf("%d",&N);
    premier=0;
    for(i=2;i<=N/2;i++)
        if(N%i==0){
            premier++;
            break;
        }
    if(premier==0)
        printf("%d est un nombre premier",N);
    else
        printf("%d n'est pas un nombre premier",N);
    return 0;
}