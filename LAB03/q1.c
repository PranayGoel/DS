#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct{
    int re, im;
}complex;

void add(complex *c1, complex *c2){
    printf("%d + %di", (c1->re + c2->re), (c1->im + c2->im));

}

int main(){
    complex c1;
    complex c2;
    scanf("%d %d", &c1.re, &c1.im);
    scanf("%d %d", &c2.re, &c2.im);
    add(&c1, &c2);


}