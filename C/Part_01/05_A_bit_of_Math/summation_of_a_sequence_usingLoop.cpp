#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n, sum;
	printf("1+2+3+......n=?\n");
	printf("enter n: ");
	scanf("%d", &n);

	sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum = sum + i;
	}

	printf("%d\n", sum);
	return 0;
}