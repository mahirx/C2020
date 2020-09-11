#include <stdio.h>


int main(int argc, char const *argv[])
{
	for (int i = 1; i <= 20; i++)
	{
		for (int j = 1; j <= 20; j++)
		{
			printf("%d X %d = %d\n", i, j, i*j);
		}
	}
	return 0;
}