// Your code here...
#include <stdio.h>
int main(){
    int n,d,j=1;
    scanf("%d",&n);
    for(d=2;d<n;d++){
        if(n%d==0){
            j=0;
            break;
    }
}
    if(j==1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}