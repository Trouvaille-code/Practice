#include <stdio.h>
int main()
{
	/*char c1 = 'a', c2 = 'b', c3 = 'c';
	printf("b%cb%cc%c\n", c1, c2, c3);
	return 0;*/

	long a, b;
	float x, y;
	scanf_s("%d,%d\n",&a,&b);
	scanf_s("%f,%f\n",&x,&y);
	printf("a = %d,b = %d\n", a, b);
	printf("x = %f,y = %f\n", x, y);
	return 0;
}