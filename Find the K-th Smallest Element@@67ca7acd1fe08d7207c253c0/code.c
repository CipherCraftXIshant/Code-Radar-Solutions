// Your code here...
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int kthSmallest(int ary[], int n, int k) 
{
    if (n == 0 || k <= 0 || k > n)  
        return -1;
    for (int i = 0; i < k-1; i++) 
    { 
        int minIndex = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (ary[j] < ary[minIndex]) 
            {
                minIndex = j;
            }   
        }
        swap(&ary[i], &ary[minIndex]);
    }
    return ary[k]; 
}