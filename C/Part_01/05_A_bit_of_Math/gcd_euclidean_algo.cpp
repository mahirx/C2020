#include <stdio.h>


int main(int argc, char const *argv[])
{
	int a, b, x, gcd, r;
	scanf("%d", &a);
	scanf("%d", &b);


	if (b > a)
	{
		x = a;
		a = b;
		b = x;
	}


	while( x != 0)
	{
		x = a % b;
		a = b;
		b = x; 
	}

	printf("G.C.D. is %d \n", a);
	return 0;
}