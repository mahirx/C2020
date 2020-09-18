#include <stdio.h>


int main(int argc, char const *argv[])
{
	double p, n, r, i, total;


	printf("rate of interest\n");
	scanf("%lf", &r);
	printf("principal\n");
	scanf("%lf", &p);
	printf("time span \n");
	scanf("%lf", &n);


	i = (p * n * r) / 100;

	printf("interest is %lf\n", i);


	total  = i + p;


	printf("total amount to return is: %lf\n", total);
	printf("monthly amount to return is: %lf\n", total/(n * 12));



	return 0;
}