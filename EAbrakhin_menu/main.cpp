#include <clocale>
#include <iostream>

#include "menu.hpp"
#include "menu_functions.hpp"

int main() {
	std::setlocale(LC_ALL, "");

	EAbrakhin::MenuItem study_summ = { "1 - Складывать", EAbrakhin::study_summ };
	EAbrakhin::MenuItem study_substract = { "2 - Вычитать", EAbrakhin::study_substract };
	EAbrakhin::MenuItem study_multiply = { "3 - Умножать", EAbrakhin::study_multiply };
	EAbrakhin::MenuItem study_divide = { "4 - Делить", EAbrakhin::study_divide };
	EAbrakhin::MenuItem study_go_back = { "0 - Выйти в меню", EAbrakhin::study_go_back };

	EAbrakhin::MenuItem* study_children[] = {
		&study_go_back,
		&study_summ,
		&study_substract,
		&study_multiply,
		&study_divide,
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);

	EAbrakhin::MenuItem study = { "1 - Математика", EAbrakhin::study };
	EAbrakhin::MenuItem exit = { "0 - Выход", EAbrakhin::exit };

	EAbrakhin::MenuItem* main_children[] = { &exit, &study };
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);

	int user_input;
	do {
		std::cout << "Hi!" << std::endl;
		for (int i = 1; i < main_size; ++i) {
			std::cout << main_children[i]->title << std::endl;
		}
		std::cout << main_children[0]->title << std::endl;
		std::cout << "Обучайка > ";

		std::cin >> user_input;
		main_children[user_input]->func();

		std::cout << std::endl;
	} while (true);

	return 0;
}
