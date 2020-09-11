#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, j, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i - 1; j++)
		{
			if (j == 1 or j == i - 1) { printf("* "); }
			else printf("  ");
		}
		printf("\n");
	}
	for (i = 1; i <= n; i++) {
		if (i == 1 or i == n) printf("* ");
		else printf("  ");
	}
	printf("\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = n - 1; j >= i; j--)
		{
			if (j == i or j == n - 1) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}