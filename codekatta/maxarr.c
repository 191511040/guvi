#include <stdio.h>

int main()
{
  int a,b[30],i,c,max;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
      scanf("%d",&b[i]);
  }
  max=b[0];
  for(i=0;i<a;i++)
  {
      if(max<b[i])
      {
          max=b[i];
      }
      
  }
  printf("%d",max);
  }
