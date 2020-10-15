#include <stdio.h>
#include <math.h>

int SumEven(void);

/*int main()
{
	printf("Dap an can tim la: %lld", SumEven());
}*/

int main(void)
{
	long long int i,j,NumCheck,IsPrime,Max=0;
	NumCheck = 600851475143;
	
	for (i = 3; i <= sqrt(NumCheck); i+=2)
	{
		if (NumCheck % i == 0)
		{
			IsPrime = 1;
			for (j = 3; j <= sqrt(i); j+=2)
			{
				if (i % j == 0)
				{
					IsPrime = 0;
					break;
				}
			}
			if (IsPrime == 1)
			{
				Max = i;
				
			}
		}
	}
	printf("%lld, ", Max);
}
