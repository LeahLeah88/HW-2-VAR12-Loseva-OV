#include <iostream>

int Swap(int a)
{
	if (a > 9 && a < 100)
	{
		int c1;
		int c2;
		c1 = a / 10;
		c2 = a % 10;
		return c2 * 10 + c1;
	}
	else
		return a;
}

int main()
{
	int c;
	std::cout << "c = ";
	std::cin >> c;
	std::cout << Swap(c);