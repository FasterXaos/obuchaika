#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>
#include <random>

namespace {
	static const char SPACE = ' ';

	bool example(int x, int y, int ans, char op);
}

namespace EAbrakhin {
	const MenuItem* show_menu(const MenuItem* current) {
		std::cout << "Hi!" << std::endl;
		for (int i = 1; i < current->children_count; ++i) {
			std::cout << current->children[i]->title << std::endl;
		}
		std::cout << current->children[0]->title << std::endl;
		std::cout << "Обучайка > ";

		int user_input;
		std::cin >> user_input;
		std::cout << std::endl;

		return current->children[user_input];
	};

	const MenuItem* exit(const MenuItem* current) {
		std::exit(0);
	}

	const MenuItem* go_back(const MenuItem* current) {
		std::cout << current->title << std::endl << std::endl;
		return current->parent->parent;
	};

	const MenuItem* algebra_summ(const MenuItem* current) {
		std::mt19937 mt(time(0));

		bool exit;
		do {
			int first_val = mt() % 100, second_val = mt() % 100;
			exit = example(first_val, second_val, first_val + second_val, '+');
		} while (!exit);
		std::cout << std::endl;

		return current->parent;
	};

	const MenuItem* algebra_substract(const MenuItem* current) {
		std::mt19937 mt(time(0));

		bool exit;
		do {
			int first_val = mt() % 100, second_val = mt() % 100;
			exit = example(first_val, second_val, first_val - second_val, '-');
		} while (!exit);
		std::cout << std::endl;

		return current->parent;
	};

	const MenuItem* algebra_multiply(const MenuItem* current) {
		std::mt19937 mt(time(0));

		bool exit;
		do {
			int first_val = mt() % 100, second_val = mt() % 100;
			exit = example(first_val, second_val, first_val * second_val, '*');
		} while (!exit);
		std::cout << std::endl;

		return current->parent;
	};

	const MenuItem* algebra_divide(const MenuItem* current) {
		std::mt19937 mt(time(0));

		bool exit;
		do {
			int first_val = mt() % 100;
			int second_val = (mt() % 99) + 1;
			exit = example(first_val, second_val, first_val / second_val, '/');
		} while (!exit);
		std::cout << std::endl;

		return current->parent;
	};

	const MenuItem* mathan_differentiation(const MenuItem* current) {

		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	}

	const MenuItem* mathan_integration(const MenuItem* current) {

		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	}
}

namespace {
	bool example(int x, int y, int ans, char op) {
		int user_ansver;
		do {
			std::cout << "н - Назад" << std::endl;
			std::cout << x << SPACE << op << SPACE << y << " = ";
			std::cin >> user_ansver;

			if (std::cin.fail()) {
				std::cin.clear();
				std::cin.ignore(32767, '\n');
				return true;
			}
			std::cout << ((user_ansver == ans) ? "Верно" : "Неверно") << std::endl << std::endl;
		} while (user_ansver != ans);

		return false;
	}
}
