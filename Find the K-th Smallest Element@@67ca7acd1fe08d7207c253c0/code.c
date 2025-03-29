// Your code here...
#define MAX 99999999

int kthSmallest(int arr[], int n, int k){
    int min, min_i,i;
    if (k>n) return -1;
    while (k--)
    { 
        min=MAX;
        for(i=0;i<n;i++) {
            if (min>arr[i]) min=arr[i], min_i=i;
        }
        arr[min_i]=MAX;
    }
    return min;
}   