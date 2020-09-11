#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n=0;


	while(true)
	{
		n=n+1;

		if (n % 2 == 0)
		{
			continue;
		}


		printf("%d\n", n);
	}
	return 0;
}