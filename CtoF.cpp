#include <stdio.h>
#include <stdlib.h>


int main()
{
	double F, C;

	printf("½Ð¿é¤JÄá¤ó·Å«×:\n");
	scanf("%lf", &C);
	F = C * 9 / 5 + 32;
	C = (F - 32) * 5 / 9;

	printf("µØ¤ó is %lf\nÄá¤ó is %lf", F, C);
	system("pause");
	return 0;
}