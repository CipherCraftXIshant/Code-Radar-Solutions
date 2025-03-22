// Your code here...
// nice question
#include <stdio.h>

int main() {
    int n, sorted = 1; // Assume the array is sorted
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            sorted = 0; // Mark as not sorted
            break;      // No need to check further
        }
    }

    if (sorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
