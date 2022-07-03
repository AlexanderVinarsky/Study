#pragma once
#include <iostream>;

void func(int n, const char* str)
{
	for (int i = 0; i < n; i++)
	{
		printf("%s", str);
	}
}