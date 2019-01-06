#include <stdio.h>

int main()
{
  int a,b,i,c[20],d[20],j,count=0;
  scanf("%d%d",&a,&b);
  
  for(i=0;i<a;i++)
  {
      scanf("%d",&c[i]);
  }
 
  for(j=0;j<b;j++)
  {
      scanf("%d",&d[j]);
  }
  if(c[i]==d[j])
  {
      count++;
  }
  if(count>0)
  {
    printf("yes");
  }
  else
  {
    printf("No");
  }
}
