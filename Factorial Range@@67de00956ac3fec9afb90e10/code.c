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

// Function to print factorial of each number in range
void factorialRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("Factorial of %d = %lld\n", i, factorial(i));
    }
}
