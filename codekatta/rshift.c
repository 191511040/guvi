#include <stdio.h>

int main()
{   
    int a,b,c[10],i,x,j;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    
   
    for(j=a-1;j<b;j--)
    { 
        x=c[a-1];
        for(i=a-1;i>0;i--)
        {
        c[i]=c[i]-1;
        c[0]=x;
    }
    for(i=0;i<a;i++)
    {
    printf("%d",c[i]);
    }
    }
    
    
}
