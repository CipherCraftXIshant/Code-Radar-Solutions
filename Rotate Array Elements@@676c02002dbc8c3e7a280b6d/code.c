// Your code here...
#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int n, int k) {
    k = k % n; // Handle cases where k > n
    reverse(arr, 0, n - 1);
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    
    // Reading the size of the array
    scanf("%d", &n);
    int arr[n];
    
    // Reading the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Reading the number of rotations
    scanf("%d", &k);

    // Rotating the array
    rotateArray(arr, n, k);

    // Printing the rotated array
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
