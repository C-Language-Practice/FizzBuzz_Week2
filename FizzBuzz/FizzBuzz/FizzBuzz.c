#include <stdio.h>
#include <stdlib.h>

int main()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i % 3 == 0)
		{
			printf_s("fizz");
		}
		if (i % 5 == 0)
		{
			printf_s("buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf_s("%d", i);
		}
		printf_s("\n");
	}
}
