#include<stdio.h>
int main()
{
	int n, j, i;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n; j >= i; j--)
		{
			printf(" ");
		}
		for (j = 1; j <= i - 1; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= n; i++) {
		printf("* ");
	}
	printf("\n");
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		for (j = n - 1; j >= i; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}