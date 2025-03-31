// Your code here...
#include <stdio.h>

int main(){
    int n,val;
    scanf("%d",&n);
    int arr[n];
    for(int k=0; k<n; k++){
        scanf("%d",&arr[k]);
    }
    int rem[n];
    int c=0;
    int unique;
    for(int r=0; r<n; r++){
        unique = 1;
        for(int t=0; t<c; t++){
            if(rem[t] == arr[r]){
                unique = 0;
                break;
            } 
        }
        if(unique){
            rem[c]=arr[r];
            c++;
        } 
        }
    for(int i=0; i<c; i++){
        val = 0;
        for(int j=0; j<n; j++){
            if(rem[i]==arr[j]){
                val++;
            }
        }
        printf("%d %d",rem[i],val);
        printf("\n");
    }
    return 0;
}