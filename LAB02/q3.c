#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

void smallest(int *, int);

int main(){
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i = 0; i< n; i++) scanf("%d", &arr[i]);

    smallest(arr, n);

}

void smallest(int *arr, int n){
    int *p = arr;
    int smallest = *arr;
    int i = 0;
    while(i < n){
        if(*(p+i) < smallest){
            smallest = *(p+i);

        }
        i++;
    }
    printf("%d", smallest);
}