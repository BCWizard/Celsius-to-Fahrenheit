#include <stdio.h>
#include <stdlib.h>


int main()
{
	double F, C;

	printf("�п�J���ū�:\n");
	scanf("%lf", &C);
	F = C * 9 / 5 + 32;
	C = (F - 32) * 5 / 9;

	printf("�ؤ� is %lf\n��� is %lf", F, C);
	system("pause");
	return 0;
}