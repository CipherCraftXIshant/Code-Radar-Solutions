// Your code here...
#include <stdio.h>
void findSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return;
    }
    int largest = arr[0], secondLargest = -1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

            }

int main() {
    int size;
    scanf("%d", &size);

    if (size < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int arr[size];       
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    findSecondLargest(arr, size);
    return 0;
}
