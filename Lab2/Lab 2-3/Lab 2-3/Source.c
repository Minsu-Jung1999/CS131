#include <stdio.h>

int main(void)
{
	int count;
	int power;
	count = 1;
	power = 1;
	while (count <= 10)
	{
		printf("%d\n", power);
		count = count + 1;
		power = power *10;
	}
}