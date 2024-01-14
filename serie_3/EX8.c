#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    int T[20], n, i, j, cmp, occ[30],nbr[30];

    printf("Donner la taille de tableau: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }
    cmp = 1;
    nbr[0] = T[0];
    occ[0]=cmp;
    for (j = 0, i = 1; i < n; i++){
        if(T[i]!=nbr[j]){
            j++;
            nbr[j] = T[i];
            cmp=1;
        }
        else
            cmp++;
        occ[j]=cmp;
    }
    for (i = 0; i <= j; i++)
        printf("%d%d ",occ[i],nbr[i]);

    return 0;
}
