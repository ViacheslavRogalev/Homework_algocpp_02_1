#include<iostream>

int fooFib(int num)
{
	if (num <= 1)
	{
		return num;
	}
	return fooFib(num - 1) + fooFib(num - 2);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int num = 0;
	std::cout << "Введите число: ";
	std::cin >> num;
	std::cout << "Числа Фибоначчи: ";

	std::cout << fooFib(num) << std::endl;
}

// Алгоритмическая сложность по времени O(2^n), по памяти O(1).