#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    char x[100];
    int i, sum = 0;
    scanf("%s", &x);
    for (i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == 97)
        {
            sum += 1;
        }
    }
    printf("%d", sum);
    return 0;
}