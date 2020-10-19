//project Euler problem 5
#include <stdio.h>
#include <math.h>

int main()
{
	int Status = 0;
	int Count = 20;
	//check dependent on status. output number when Status is 1
	while (Status == 0)
	{
		for (int i = 2; i < 20; i++)
		{
			Status = 1;
			if (Count % i != 0)
			{
				Status = 0;
				break; //must have because of the line: status = 0
			}
		}
		Count += 20;
	}
	Count -= 20;
	printf("%d", Count);
}
