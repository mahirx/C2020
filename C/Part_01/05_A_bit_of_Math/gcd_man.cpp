#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a, b, x, gcd;
	scanf("%d", &a);
	scanf("%d", &b);


	if (b > a)
	{
		x = a;
	}
	else{
		x=b;
	}

	for (; x >= 1; x--)
	{
		if (a % x == 0 && b % x == 0)
		{
			gcd = x;
			break;
		}
	}

	printf("G.C.D. is %d \n", gcd);
	return 0;
}