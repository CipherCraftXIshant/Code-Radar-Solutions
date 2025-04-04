// Your code here...
#include<stdio.h>
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    
    int product1 = arr[n - 1] * arr[n - 2];
    int product2 = arr[0] * arr[1];
    int max_product;
    if(product1>product2){
        max_product=product1;
    }
    else{
        max_product=product2;
    }
    printf("%d",max_product);
    return 0;
}