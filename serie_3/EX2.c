#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
char nom[50],*Pi,*Pf;
int trouve=0;
printf("donner un mot: ");
scanf("%s",nom);
for(Pi=nom,Pf=nom+strlen(nom)-1;Pi<Pf;Pi++,Pf--){
	if(*Pi==*Pf)
           trouve=1;
	else{
	   trouve=0;
	   break;
	}
}
if(trouve==1)
printf("%s est un palindrome",nom);
else
printf("%s n est pas un palindrome",nom);


return 0;
}