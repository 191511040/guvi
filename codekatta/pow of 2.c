#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n>0)
    {
        while(n%2==0)
        {
            n=n/2;
        }
        if(n==1)
        {
            printf("yes");
        }
        else
        {
            printf("No");
        }
    }
}
