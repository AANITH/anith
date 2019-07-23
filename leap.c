#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if((n%400)==0)
    {
        printf("leap");
    }
    else if((n%100)==0)
    {
        printf("not");
    }
    else if((n%4)==0)
    {
        printf("leap");
    }
    else
    {
        printf("not");
    }
    return 0;
     
}
