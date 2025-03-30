// Your code here...
#include <stdio.h>

int main() {
    int n,r;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &r);
    if(r>=0 && r<=n){
        for(int i = n-r; i < n; i++) {
            printf("%d ", arr[i]);
        }
        for(int i = 0; i < n-r; i++){
            printf("%d ", arr[i]);
        }

    }
    else{
        r=r%n;
        for(int i = n-r; i < n; i++) {
            printf("%d ", arr[i]);
        }
        for(int i = 0; i < n-r; i++){
            printf("%d ", arr[i]);
        }
    }
    
    return 0;
}