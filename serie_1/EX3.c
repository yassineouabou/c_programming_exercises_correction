#include<stdio.h>
int main(){
    int n;
    float fact;
    printf("donner le nombre de photocopies: ");
    scanf("%d",&n);
    if(n<10)
        fact=n;
    else if(n>10 && n<30)
        fact=10+((n-10)*0.6);
    else if(n>30)
        fact=10+(20*0.6)+(n-30)*0.4;
    printf("la factours est: %.2f",fact);
    return 0;
}