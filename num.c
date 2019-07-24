#include <stdio.h>

int main()
{
    int n,i,sum=0,b,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
        
    
    

    return 0;
}