#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	
	scanf("%d%d", &a, &b);
	if (a>=1 && a<=10000 && b >= 1 && b <= 10000)
	{
		printf("%d\n", a+b);
		printf("%d\n", a-b );
		printf("%d\n", a*b );
		printf("%d\n", a/b);
		printf("%d\n", a%b );
	}





}