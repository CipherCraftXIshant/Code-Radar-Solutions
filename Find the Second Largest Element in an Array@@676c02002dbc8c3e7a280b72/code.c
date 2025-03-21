#include <stdio.h>

void findSecondLargest(int arr[], int size) {
    int largest = arr[0], secondLargest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    printf("%d\n", size); 
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n%d\n", secondLargest); 
}

int main() {
    int size;
    scanf("%d", &size);
    
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, size);

    return 0;
}
