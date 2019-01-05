#include <stdio.h>

int main()
{
    int a,b,c[10],i;
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&c[i]);
    }
    
    for(i=0;i<a;i++)
    {
        
        if(c[i]==b)
        {
            printf("yes\n");
        }
        else 
        {
            printf("No\n");
        }
        
       
    }
    
