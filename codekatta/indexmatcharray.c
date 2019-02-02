#include<stdio.h>
int main()
{
 int a[30],n,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
     
 }
 for(i=0;i<n;i++)
 {
     if(i==a[i])
     {
         printf("%d",a[i]);
         i++;
     }
     else
     {
         printf("'-1'");
     }
 }
}
