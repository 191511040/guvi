#include<stdio.h>
int  main()
{
    int n,m,count=0,s;
    scanf("%d %d",&n,&m);
    while(n>0)
    {
        n=n-m;
        count++;
    }
    if(n<0)
    {
        printf("%d",count-1);
    }
    else
    {
        printf("%d",count);
    }
    
}
