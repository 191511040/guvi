 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char s[30],a[30];
 	int n,l1,l2,count=0;
 	scanf("%s%s",&s,&a);
 	scanf("%d",&n);
 	l1=strlen(s);
 	l2=strlen(a);
 	if(l1==l2)
 	{
 	    for(i=0;i<11;i++)
 	    {
 	        if(s[i]!==a[i])
 	        count++;
 	    }
 	    if(count==n)
 	    {
 	        printf("yes");
 	    }
 	    else
 	    {
 	        printf("no")
 	    }
 	}
 	
