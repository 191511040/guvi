#include <stdio.h>

int main(void) 
{
	int n, a[30],i,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	        }
	    }
	}
	for(j=0;j<n;j++)
	{
	    printf("%d",a[j]);
	}
