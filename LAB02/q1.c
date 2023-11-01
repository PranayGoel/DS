/*Write a function Reverse to reverse the elements of an integer array using pointer.
Access the elements of the array using dereference operator. Read the values from
the keyboard in main function. Display the result in the main function.*/

#include<stdio.h>
#include<malloc.h>

int* reverse(int*, int);

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n*sizeof(int));
    for(int i = 0; i< n; i++) scanf("%d", &arr[i]);
    int *rev = reverse(arr, n);
    for(int i = 0; i< n; i++) printf("%d", rev[i]);

}

int* reverse(int *arr, int n){
    int *temp;
    int *ptr;
    for(int i = 0; i< n; i++){
        ptr = arr + n-i-1;
        temp[i] = *ptr;
    }
    return temp;
}