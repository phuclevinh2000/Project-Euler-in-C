//Problem 6, Project euler
#include <stdio.h>
#include <math.h>

int main(void)
{
	float SumSquares, SumNatural, Out;
	SumSquares = (100.0 / 6) * (100.0 + 1) * (2 * 100.0 + 1);
	SumNatural = 100 * (2 * 1 + (100 - 1) * 1) / 2;
	SumNatural = pow(SumNatural, 2);

	Out=abs(SumNatural - SumSquares);

	printf("%.0f", Out);
}
