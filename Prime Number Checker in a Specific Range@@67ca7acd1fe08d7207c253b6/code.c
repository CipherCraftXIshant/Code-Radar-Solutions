// Your code here...
int printPrimesInRange(int a, int b){
    int j, int k=0;
    for(int i=a;i<=b;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                j==1;
                k++;
            }
        }
    }
    if(j==1){
        printf("No prime numbers.");
    }
    else{
        printf("%d",i);
    }
}