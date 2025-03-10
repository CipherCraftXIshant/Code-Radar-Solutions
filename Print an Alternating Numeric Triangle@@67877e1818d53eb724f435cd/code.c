// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        int start = (i % 2 == 0) ? 0 : 1; // Start with 1 if odd row, 0 if even
        
        for (int j = 0; j < i; j++) {
            printf("%d ", start);
            start = 1 - start; // Alternate between 0 and 1
        }
        
        printf("\n");
    }
    
    return 0;
}
