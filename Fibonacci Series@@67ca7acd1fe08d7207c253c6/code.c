// Your code here...
#include <stdio.h>
int f=0,f1=0,f2=1;

int fibonacciSeries(int n){
    if(n>0){
        printf("%d ",f);
        f=f1+f2;
        f2=f1;
        f1=f;
        fibonacciSeries(n-1);
    }
}