#include <iostream>

int swap(int number)
{
	if (number > 9 && number < 100)
	{
		int figure1 = number / 10;
		int figure2 = number % 10;
		return figure2 * 10 + figure1;
	}
	else
		return number;
}

int main()
{
	int number;
	std::cout << "number = ";
	std::cin >> number;

	std::cout << Swap(number);

