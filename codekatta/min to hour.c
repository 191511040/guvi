#include<stdio.h>
void main()
{
int min,hour;
printf("enter the minute");
scanf("%d",&min);
hour=min/60;
min=min%60;
printf("%d %d",hour,min);
}
