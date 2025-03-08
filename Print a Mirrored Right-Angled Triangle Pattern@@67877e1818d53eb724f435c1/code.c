// Your code here...
Sure, I can help you with that! Below is a simple C program to print a mirrored right-angle triangle pattern:

#include <stdio.h>

int main() {
    int n, i, j, k;
    
    // Number of rows for the triangle
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++) {
        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}