#include <iostream>

using namespace std;

int main()
{
	// Вывести на экран таблицу символов в формате «ASCII-код – символ».
	int i = 0;
	while(i <= 127)
	{
		cout << i << "-" << char(i) << "\t";
		i++;
	}

	// Вычислить сумму чисел в заданном диапазоне. 
	int left, right, sum = 0;
	cout << "\n\nEnter the range: ";
	cin >> left >> right;

	while (left <= right)
	{		
		sum += left;
		left++;
	}
	cout << "\nSum of numbers in the range: " << sum << endl;

	// Написать программу, вычисляющую факториал введённого числа.
	int number, factorial = 1;
	cout << "\n\nEnter a number: ";
	cin >> number;

	while (number > 1)
	{
		factorial *= number--;
	}
	cout << "\nFactorial of number: " << factorial << endl;

	// С клавиатуры вводится целое число любой разрядности. 
	// Определить количество цифр в нем и их сумму. 
	int counter = 0;
	sum = 0;
	cout << "\nEnter a number: ";
	cin >> number;

	while (number > 0)
	{
		sum += number % 10;
		counter++;
		number /= 10;
	}
	cout << "\nQuantity of digits: " << counter << endl;
	cout << "\nSum of digits: " << sum << endl;

	// С клавиатуры вводится целое число. Определить, является ли оно простым.
	i = 2;
	cout << "\nEnter a number: ";
	cin >> number;

	while (i <= number / 2)
	{
		if (number % i == 0)
			break;
		i++;
	}
	if (i > number / 2)
		cout << "The number is prime!";
	else
		cout << "The number is not prime!";

	return 0;
}
