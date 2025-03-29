// Your code here...
#include <stdio.h>

int isPrime(int num) 
{
    if (num < 2) 
        return 0;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) 
            return 0;
    }
    return 1;
}

void printPrimesInRange(int start, int end) 
{
    int c=0;
    for (int i = start; i <= end; i++) 
    {
        if (isPrime(i))
        {
            printf("%d ", i);
            c++;
        } 
    }
    if(!c)
        printf("No prime numbers");
}