#include<stdio.h>
int main()
{
	int x = 0, y = 0, z = 0;
	do {
		x++;
		y++;
		z = z + 3;
	} while ((x + y + z != 100) && (5 * x + 3 * y + z / 3 != 100));
	printf("x = %d,y = %d,z = %d\n", x, y, z);
	return 0;
}