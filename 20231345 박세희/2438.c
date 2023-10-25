#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
	int n,i,k;
	
	scanf("%d",&n);
	if (n >= 1 && n <= 100)
	{
		for (i=1;i<=n;i++) 
		{
				for (k=1;k<=i;k++)
				{
					printf("*");
				}
				printf("\n");
		}

	}

}