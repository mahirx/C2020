#include <stdio.h>


int main(int argc, char const *argv[])
{
	double celsius, farenheit;


	printf("Temprature in celsius: \n");
	scanf("%lf", &celsius);

	farenheit = (celsius * 1.8) +32;

	printf("Temprature in farenheit: %lf\n", farenheit);
	return 0;
}