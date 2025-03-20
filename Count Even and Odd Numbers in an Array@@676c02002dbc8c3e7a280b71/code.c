// Your code here...
#include <stdio.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;
    scanf("%d", &n);

    int arr[n]; // Declaring an array of size 'n'
    
    // Taking user input for the array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Checking each element for even or odd
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even_count++; // Increment even count
        } else {
            odd_count++;  // Increment odd count
        }
    }

    // Displaying the results
    printf("%d %d", even_count,odd_count);

    return 0;
}
