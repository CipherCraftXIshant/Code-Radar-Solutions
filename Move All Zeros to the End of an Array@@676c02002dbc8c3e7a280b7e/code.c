// Your code here...
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int t;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main(){
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int j=0; j<n; j++){
        if(arr[j]>0){
            printf("%d ", arr[j]);
        }
        else{
            count++;
        }
    }
    for(int k=0; k<count;k++){
        printf("0 ");
    }
}