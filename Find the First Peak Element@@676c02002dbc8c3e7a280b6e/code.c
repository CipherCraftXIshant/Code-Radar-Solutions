// Your code here...
#include <stdio.h>

int main() {
    int n,a;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        if(a>0){
            break;
        }
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1] && arr[j]>arr[j-1]){
                a=arr[j];
                break;
            }
            else{
                a=0;
            }
        }
    }
    if(a>0){
        printf("%d",a);
    }
    else{
        if(arr[0]==arr[1]){
            printf("%d", -1);
        }
        else{
            printf("%d", arr[n-1]);
        }
    }
    return 0;
}