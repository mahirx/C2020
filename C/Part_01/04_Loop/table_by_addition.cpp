#include <stdio.h>


int main(int argc, char const *argv[])
{	
	int m, n;
	for (int i = 1; i <= 20; i++)
	{
		m=0;
		for (int j = 1; j <= 20; j++)
		{
			m=i+m;
			printf("%d X %d = %d\n", i, j, m);
		}
	}
	return 0;
}