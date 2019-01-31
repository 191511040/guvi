#include<stdio.h>
 #include<string.h>
 int main()
 {
 	char s[20];
 	int n,i;
 	printf("input \noutput :");
 	scanf("%s",s);
 	n=strlen(s);
 	for(i=n-1;i>=0;i--)
 	{
 		if((s[i]=='a')||(s[i]=='e')||(s[i]=='i')||(s[i]=='o')||(s[i]=='u')||(s[i]=='A')||(s[i]=='E')||(s[i]=='I')||(s[i]=='O')||(s[i]=='U'));
 		else
 		printf("%c",s[i]);
 	}
 }
