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
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    } 
    bubbleSort(arr, n);
    int largest = arr[n - 1];
    int secondLargest = -1;
    
    // Find the second largest by checking from second-last to first
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < largest) {
            secondLargest = arr[i];
            break;
        }
    }

    printf("%d", secondLargest);
    return 0;
}