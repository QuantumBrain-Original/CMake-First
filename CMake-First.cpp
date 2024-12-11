#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << std::endl;
	return 0;
}
