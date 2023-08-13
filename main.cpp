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
	std::cout << "������� �����: ";
	std::cin >> num;
	std::cout << "����� ���������: ";

	std::cout << fooFib(num) << std::endl;
}

// ��������������� ��������� �� ������� O(2^n), �� ������ O(1).