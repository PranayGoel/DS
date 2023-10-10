//Check whether the given matrix is sparse matrix or not using functions//

#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

int main(){
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d%d", &m, &n);
    int **a;
    a = (int **)malloc(m*sizeof(int *));
    for(int i = 0; i< m; i++){
        a[i] = (int *)malloc(n*sizeof(int));
    }

    int count = 0;
    printf("\nEnter values: \n");
    for(int i = 0; i< m; i++){
        for(int j = 0; j< n; j++){
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0) count++;
        }
    }

    if(count > ((m*n)/2)) printf("Sparse matrix");
}