// Your code here...
#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    int temp[k];

    // Store last k elements in temp array
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    rightRotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
