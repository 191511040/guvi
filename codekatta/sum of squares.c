#include <stdio.h>

int main()
{
    int n,a,c,d,e;
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    c=a*a;
    d=n*n;
    e=c+d;
    printf("%d",e);
    
}
