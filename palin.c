#include <stdio.h>

int main()
{
    int n,temp,sum=0,rem=0;
    
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
        
    }
    if(temp==sum)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}