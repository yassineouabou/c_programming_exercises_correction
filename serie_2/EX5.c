#include<stdio.h>
void crypte(char *Msg){
    char *P;
    for (P = Msg; *P !='\0' ; P++){
        if(*P>='a' && *P<='z'){
            *P=*P + 5;
            if(*P>'z')
                *P=(*P-'z')+'a'-1;
        }
        else if(*P>='A' && *P<='Z'){
            *P=*P + 5;
            if(*P>'Z')
                *P=(*P-'Z')+'A'-1;
        }
    }
    puts(Msg); 
}

int main(){
    char cMsg[50];
    printf("Donner la chaine de caractere a crypter: ");
    scanf("%s",cMsg);
    printf("Votre chaine de caractere avant le cryptage est: %s\n",cMsg);
    printf("Votre chaine de caractere apres le cryptage est: ");
    crypte(cMsg);
    return 0;
}