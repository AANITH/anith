#include <stdio.h>

int main()
{
    int rem=0,a,sum=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        rem=a%10;
        
        a=a/10;
        sum=sum+pow(rem,3);
    }
    if(t==sum)
    {
    printf("yes");
    }
    else
    {
    printf("no");
    }

    return 0;
}
