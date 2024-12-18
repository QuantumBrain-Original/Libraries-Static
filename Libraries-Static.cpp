#include <iostream>
#include <string>
#include <Windows.h>
#include "HelloUser_Static.h"

int main() // Задача 1. Статическая библиотека
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Greeter user;
	user.greet(name);
	system("pause");
}
