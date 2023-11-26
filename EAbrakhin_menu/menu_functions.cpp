#include "menu_functions.hpp"

#include <cstdlib>
#include <iostream>

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
		
		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	};

	const MenuItem* algebra_substract(const MenuItem* current) {
		
		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	};

	const MenuItem* algebra_multiply(const MenuItem* current) {
		
		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	};

	const MenuItem* algebra_divide(const MenuItem* current) {
		
		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	};

	const MenuItem* mathematical_analysis_differentiation(const MenuItem* current) {

		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	}

	const MenuItem* mathematical_analysis_integration(const MenuItem* current) {

		std::cout << current->title << std::endl << std::endl;
		return current->parent;
	}
}
