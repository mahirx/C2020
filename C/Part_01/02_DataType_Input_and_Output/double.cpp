#include <stdio.h>


int main(int argc, char const *argv[])
{
	int x;
	x=12.89;
	double d;
	d= (int)x;//Type Casting


	printf("%d\n", x);
	printf("%lf\n", d);



	x=125.898978;
	d= x;//Type Casting Happens Automatically


	printf("%d\n", x);
	printf("%lf\n", d);


	return 0;
}