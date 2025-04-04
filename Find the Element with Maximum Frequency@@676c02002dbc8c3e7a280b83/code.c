// Your code here...
include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxfrequency = 0;
    int max = arr[0];
    for(int i=0;i<n;i++){
        int count =1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count ++;
            }
        }
        if(count > maxfrequency){
            maxfrequency = count;
            max =arr[i];
        }

    }
    printf("%d\n",max)
}