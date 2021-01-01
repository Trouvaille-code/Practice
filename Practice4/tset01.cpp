#include<stdio.h>
int main()
{
	int x, y, z;
	int count = 0;
	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 19; y++)
		{
			z = 50 - x - y;
			if (10 * x + 5 * y + z == 100)
			{
				count++;
				printf("x = %d,y = %d,z = %d\n", x, y, z);
			}

		}
	}
	printf("count = %d\n", count);
	return 0;
}