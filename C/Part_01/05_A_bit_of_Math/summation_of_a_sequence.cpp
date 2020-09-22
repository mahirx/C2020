#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n, sum;
	printf("1+2+3+......n=?\n");
	printf("enter n: ");
	scanf("%d", &n);


	sum = n * (n+1)/2;

	printf("%d\n", sum);
	return 0;
}