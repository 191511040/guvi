#include <stdio.h>

int main(void) 
{
	int c,k,i,j,mul=1,flag=0;
	scanf("%d %d",&c,&k);
	for(i=0;i<c;i++)
	{
			for(j=i;j>0;j--)
			{
				mul=mul*k;
				if(mul==c)
				{
					flag=1;
					break;
				}
			}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
