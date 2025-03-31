// Your code here...
#include<stdio.h>
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n,c=0,val=1;
    scanf("%d",&n);
    int arr[n], res[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        val=1;
        for(int j=0;j<c;j++){
            if(arr[i]==res[j]){
                val =0;
                break;
            }
        }
        if(val){
            arr[i]=res[c];
            c++;
        }
    }
    if(c<2){
        printf("-1\n");
    }
    bubbleSort(res,c);
    printf("%d",res[1]);
    return 0;
}