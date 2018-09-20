#include <math.h>
#include <stdio.h>

double fib(long n)
{
	double phi = (sqrt(5) + 1) / 2.0;
	return round(pow(phi, n) / sqrt(5));

}

int main(void)
{
	long num;

	for (num = 0; num < 98; num++)
	{
		printf("%ld : ", num);
		printf("%.0lf \n", fib(num));
	}
}
