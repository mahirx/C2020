#include <stdio.h>



int main(int argc, char const *argv[])
{
	double a1, a2, b1, b2, c1, c2, d, X, Y;
	printf("Xa1 + Yb1 = c1\n");
	printf("Xa2 + Yb2 = c2\n");

	
	printf("a1\n");
	scanf("%lf", &a1);
	printf("a2\n");
	scanf("%lf", &a2);


	printf("b1\n");
	scanf("%lf", &b1);
	printf("b2\n");
	scanf("%lf", &b2);


	printf("c1\n");
	scanf("%lf", &c1);
	printf("c2\n");
	scanf("%lf", &c2);



	d = (b2*a1 - b1*a2);



	if ((int)d == 0)
	{
		printf("this is not valid\n");
	}


	else{
		X = (c1*b2 - c2*b1) / d;
		Y = (c2*a1 - c1*a2) / d;


		printf("X is %lf\n", X);
		printf("Y is %lf\n", Y);
	}

	return 0;
}