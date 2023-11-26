#pragma once

#include "menu.hpp"

namespace EAbrakhin {
	const MenuItem* show_menu(const MenuItem* current);

	const MenuItem* exit(const MenuItem* current);

	const MenuItem* go_back(const MenuItem* current);

	const MenuItem* algebra_summ(const MenuItem* current);
	const MenuItem* algebra_substract(const MenuItem* current);
	const MenuItem* algebra_multiply(const MenuItem* current);
	const MenuItem* algebra_divide(const MenuItem* current);

	const MenuItem* mathematical_analysis_differentiation(const MenuItem* current);
	const MenuItem* mathematical_analysis_integration(const MenuItem* current);
}
