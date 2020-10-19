#include <stdio.h>
#include <math.h>
/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
int main()
{
	//Call for variables
	long long int NumOne, NumTwo, Change, Max;
	Max = 0;
	for (int i = 999; i > 0; i--)
	{
		for (int j = 999; j > 0; j--)
		{
			NumTwo = 0;
			NumOne = j * i;
			Change = NumOne;
			//Reverse the number
			while (Change != 0)
			{
				NumTwo = NumTwo*10 + Change % 10;
				Change /= 10;
			}
			//check for palindrome product and check for Maximum number
			if (NumTwo == NumOne && NumOne > Max)
			{
				Max = NumTwo;
			}
		}
	}
	printf("%lld", Max);
}
