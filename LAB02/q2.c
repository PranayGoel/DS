#include <stdio.h>
#include <stdlib.h>


int main() {
    int arr[] = {100, 180, 260, 310, 40, 535, 695};
    int buy[100];
    int i = 0, k =0;
    int n = 7;
    int j;
    while(i < n){
        
        while(i< n-1 && arr[i+1] < arr[i]) i++;
        
        buy[k++] = i;
        
        for(j = i; j< n; j++){
            if(arr[j+1] < arr[j] ){
                buy[k++] = j;

                i = j+1;
                break;
            }
            else if ( j == n-1) {
                buy[k++] = n-1;
                i = n;
            }
        }
    }

    for (int i = 0; i < k; i=i+2) {
        printf("(%d %d) ", buy[i],buy[i+1]);
    }

    
    return 0;
}
