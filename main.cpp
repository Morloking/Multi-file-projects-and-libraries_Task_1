#include <iostream>

#include "calculator.h"

void run() {
	int x{ 0 }, y{ 0 }, choise{ 0 };
	std::cout << "Введите первое число: ";
	std::cin >> x;
	std::cout << "Введите второе число: ";
	std::cin >> y;
	std::cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> choise;
	switch (choise) {
	case 1:
		std::cout << my_namespace::add(x, y);
		break;
	case 2:
		std::cout << my_namespace::subtract(x, y);
		break;
	case 3:
		std::cout << my_namespace::multiply(x, y);
		break;
	case 4:
		std::cout << my_namespace::divide(x, y);
		break;
	case 5:
		std::cout << my_namespace::exponentiation(x, y);
		break;
	default:
		std::cout << "Неизвестная операция. Запустите программу снова и повторите ввод.";
		break;
	}
}

int main() {
	setlocale(LC_ALL, "RUSSIAN");

	run();
	
	return EXIT_SUCCESS;
}
