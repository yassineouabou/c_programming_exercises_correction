#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct {
    int re;
    int img;
}complex;

double imag(complex z){
    return z.img;
}

double reel(complex z){
    return z.re;
}

complex mul(complex z1,complex z2){
    complex Z;
    Z.re = (reel(z1)*reel(z1))-(imag(z1)*imag(z2));
    Z.img = (reel(z1)*imag(z2))+(imag(z1)*reel(z2));
    return Z;
}

int main(){
    complex z1, z2, w;
    printf("Donner la partie real de z1: ");
    scanf("%d",&z1.re);
    printf("Donner la partie imaginaire de z1: ");
    scanf("%d",&z1.img);
    printf("Donner la partie real de z2: ");
    scanf("%d",&z2.re);
    printf("Donner la partie imaginaire de z2: ");
    scanf("%d",&z2.img);
    printf("z1 = %.2lf + %.2lf i\n", reel(z1), imag(z1) );
    printf("z2 = %.2lf + %.2lf i\n", reel(z2), imag(z2) );
    w = mul(z1,z2);
    printf("z1 x z2 = %.2lf + %.2lf i", reel(w), imag(w));

    return 0;
}