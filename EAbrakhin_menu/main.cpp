#include <clocale>
#include <iostream>

int main() {
	std::setlocale(LC_ALL, "");

	int user_input;
	do {
		std::cout << "Hi!" << std::endl;
		std::cout << "1 - ����������" << std::endl;
		std::cout << "0 - �����" << std::endl;
		std::cout << "�������� > " << std::endl;

		std::cin >> user_input;
		if (user_input == 1) {
			// TODO
		} else if (user_input == 0) {
			exit(0);
		}

		std::cout << std::endl;
	} while (true);

	return 0;
}