#include <stdio.h>
#include<string.h>

int main()
{   
    int len,i=0;
    char a[30];
    scanf("%s",&a);
    for(i=0;a[i]!=0;i=i+3)
    {
        printf("%c",a[i]);
    }
}
