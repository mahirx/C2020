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


	double xd, yd, sumd;
	scanf("%lf %lf", &xd, &yd);
	sumd = xd + yd;


	printf("%lf\n", xd);
	printf("%lf\n", yd);


	printf("%lf\n", sumd);
	printf("%0.3lf\n", sumd);


	return 0;
}