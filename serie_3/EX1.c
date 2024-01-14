#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char *nom,*Pi,*Pf,tem;
nom=(char*)malloc(30*sizeof(char));
printf("donner un nom: ");
scanf("%s",nom);
for(Pi=nom,Pf=nom+strlen(nom)-1; Pi<Pf; Pi++,Pf--){
    tem= *Pi;
    *Pi=*Pf;
    *Pf = tem;
}
printf("Votre nom inverse est: %s",nom);

return 0;
}