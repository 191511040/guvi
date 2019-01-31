#include <stdio.h>

int main(void)
{
	int x,n,k=1,a[10],t;
	scanf("%d",&n);
	for(x=0;x<n;x++)
	{
	scanf("%d",&a[x]);
	}
	for(x=0;x<n;x++)
	{
	    k=k*a[x];
	}
	printf("%d",k);
		    
		
		
	return 0;
}
