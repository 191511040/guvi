#include <stdio.h>
int main() {
	int n,a[100],i,j,d[100],ka=0;
scanf("%d",&n);
	d[0]=0;
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	d[i]=1;
	}
	for(i=1;i<n;i++)
	{
	    if(a[i]>a[i-1])
	    d[i]=d[i-1]+1;
	}
	for(i=0;i<n;i++)
	ka+=d[i];
	printf("%d",ka);
