#include <stdio.h>


int main(int argc, char const *argv[])
{
	double v, t, s;

	printf("v\n");
	scanf("%lf", &v);
	printf("t\n");
	scanf("%lf", &t);

	s = 2 * t * v;
	printf("s is %lf\n", s);
	

	return 0;

}


