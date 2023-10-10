#include<stdio.h>
#include<malloc.h>

int main(){
    int n, flag = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    int *ptr = arr;
    int num;
    printf("Enter number to search: ");
    scanf("%d", &num);
    for(int i =0; i< n; i++){
        if(num == *(ptr+i));
        int flag = 1;
    }
    if(flag == 1) printf("element is in the list");
}
