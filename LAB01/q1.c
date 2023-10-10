/*
Given an array of distinct elements. The task is to find triplets in an array whose sum is zero.
Take the array as input. (Triplets Game)
Sample Input
0 -1 2 -3 1
Sample output
0 -1 1
2 -3 1
*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>


void threeloop(int *arr, int n){
    
    for(int i = 0; i<n-2; i++){

        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k < n; k++){

                if((arr[i] + arr[j] + arr[k]) == 0) printf("%d\t%d\t%d\n",arr[i],arr[j],arr[k] );
            }
        }
    }
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sorting(int *arr, int n){
    int min;
    
    for(int i = 0; i< n+1; i++){
        min = i;
        for(int j = i+1; j< n; j++){
            if(arr[j] < arr[min]) min = j;
            if(min != i) swap(&arr[min], &arr[i]);
        }
    }
    for(int i = 0; i< n-2; i++) if((arr[i]+arr[i+1]+arr[i+2]) ==0) printf("%d\t%d\t%d\n", arr[i], arr[i+1], arr[i+2]);
}

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i = 0; i< n; i++) scanf("%d", &arr[i]);
    sorting(arr,n);
    
}

