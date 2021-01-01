/*#include<stdio.h>
int main()
{
	int x, z, i, j;
	int y = 0;
	for (x = 0; x <= 100;)
	{
		for (i = 1; ; i++)
		{
			y++;
			if (y <= 25)
				printf("i = %d\n", i);
			for (j = 1; ; j++)
			{
				x++;
				if (x <= 75)
					printf("j = %d\n", j);
				z = 100 - x - y;
				if (5 * x + 3 * y + z / 3.0 == 100)
					printf("x = %d,y = %d,z = %d\n",x,y,z);
			}
		}
	}
}*/