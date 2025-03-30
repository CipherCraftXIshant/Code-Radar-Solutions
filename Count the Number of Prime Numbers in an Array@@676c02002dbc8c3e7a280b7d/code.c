// Your code here...
#include <stdio.h>

int main()
{
    int n,r,c,count=0;
    scanf("%d",&n);
    int ary[n];
    for(int i=0;i<n;i++)
        scanf("%d",&ary[i]);
    for(r=0;r<n;r++)
    {
        for(c=2;c<=ary[r]-1;c++)
        {
            if(ary[r]%c==0)
                break;
        }
        if(ary[r]==c)
            count++;
    }
    printf("%d",count);
}
