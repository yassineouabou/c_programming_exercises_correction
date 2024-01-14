#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
char CH[100],*P;
printf("Donner une phrase: ");
gets(CH);
P=CH;
while(*P==' ') 
P++;
printf("%s",P);
}