#include <stdio.h>
#include <stdlib.h>

void func(int a[])
{
	*(a - 1) = 10;
	a++;
	*a = 20;
	a[-3] = 30;
}
int main()
{
	int c, state = OUT, n = 0;
	while ((c = getchar()) != '\n')
	{
		if (isdigit(c))
		{
			++n;
			state = IN;
		}
		else
			state = OUT;
	}
	printf("%d", n);
}
