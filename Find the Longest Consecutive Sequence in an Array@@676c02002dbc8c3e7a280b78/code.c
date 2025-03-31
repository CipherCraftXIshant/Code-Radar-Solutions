// Your code here...
#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int t;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int main(){
    int n,c;
    c=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr,n);
    int count=0, val=1;
    int res[val];
    for(int i=0; i<n; i++){
        if(arr[i]==arr[i-1]+1){
            count++;
            if(count>val){
                val = count;
            }
        }
        else{
            count=1;
        }
    }
    printf("%d",val);
    return 0;
}
