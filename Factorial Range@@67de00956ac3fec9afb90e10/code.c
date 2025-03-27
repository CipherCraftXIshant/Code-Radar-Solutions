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

// Function to print factorial of each number in the given range (positive numbers only)
void factorialRange(int start, int end) {
    if (start < 1) {
        start = 1;  // Ensure the range starts from 1 (smallest positive integer)
    }
    
    for (int i = start; i <= end; i++) {
        printf("%d\n",factorial(i));
    }
}
