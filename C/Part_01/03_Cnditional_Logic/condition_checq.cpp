#include <stdio.h>


int main(int argc, char const *argv[])
{
	char c;

	c = getchar();

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
	{
		printf("%c is vowel\n", c);
	}


	
	else{
		printf("%c is not a vowel\n", c);
	}

	return 0;
}