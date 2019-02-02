#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main() {
    int k,i,j,a[100]; 
    scanf("%d", &k);
    for(i = 0; i < k; i++){
	
       scanf("%d",&a[i]);
}

    for(i = 0; i < k; i++)
	{
	    for(j = 0; j < k; j++)
		{
			if((a[i] + a[j] == 0) )
			printf("%d %d", a[i],a[j]);
			break;
		}
	}
