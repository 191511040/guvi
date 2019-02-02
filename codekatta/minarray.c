#include <stdio.h>

int main()
{
  int a,b[30],i,c,min;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
      scanf("%d",&b[i]);
  }
  min=b[0];
  for(i=0;i<a;i++)
  {
      if(min>b[i])
      {
          min=b[i];
      }
      
  }
  printf("%d",min);
  }
