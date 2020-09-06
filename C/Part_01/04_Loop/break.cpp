#include <stdio.h>


int main(int argc, char const *argv[])
{
	int n=1;


	while(true)
	{
		printf("%d\n", n);
		n=n+1;


		if (n > 1000)
		{
			break;
		}
	}
	return 0;
}