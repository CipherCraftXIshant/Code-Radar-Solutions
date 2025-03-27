// Your code here...
#include <stdio.h>

// Function to calculate factorial of a number
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int start, end;
    
    // Taking input from user
    scanf("%d %d", &start,&end);

    if (start > end || start < 0) {
        return 0;
    }

    // Calculate factorial for each number in the range
    for (int i = start; i <= end; i++) {
        printf("%lld\n", factorial(i));
    }

    return 0;
}
