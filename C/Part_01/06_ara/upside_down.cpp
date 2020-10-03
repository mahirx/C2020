#include <stdio.h>


int main(int argc, char const *argv[])
{
	int ara[10] = {1,2,3,4,5,6,7,8,9,10};
	int tp;


	for (int i = 0; i <= 9/2; i++)
	{
		tp = ara[i];
		ara[i] = ara[9-i];
		ara[9-i] = tp;
	}

	for (int i = 0; i <= 9; i++)
	{
		printf("%d\n", ara[i]);
	}
	return 0;
}