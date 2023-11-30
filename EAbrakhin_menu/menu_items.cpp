#include "menu_items.hpp"
#include "menu_functions.hpp"

namespace {
	const EAbrakhin::MenuItem* main_children[] = {
		&EAbrakhin::EXIT,
		&EAbrakhin::STUDY
	};
	const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const EAbrakhin::MenuItem EAbrakhin::MAIN = {
	nullptr, EAbrakhin::show_menu, nullptr, main_children, main_size
};
const EAbrakhin::MenuItem EAbrakhin::EXIT = {
	"0 - Выход", EAbrakhin::exit, &EAbrakhin::MAIN
};

namespace {
	const EAbrakhin::MenuItem* study_children[] = {
		&EAbrakhin::STUDY_GO_BACK,
		&EAbrakhin::ALGEBRA,
		&EAbrakhin::MATHEMATICAL_ANALYSIS
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const EAbrakhin::MenuItem EAbrakhin::STUDY = {
	"1 - Математика", EAbrakhin::show_menu, &EAbrakhin::MAIN, study_children, study_size
};
const EAbrakhin::MenuItem EAbrakhin::STUDY_GO_BACK = {
	"0 - Выйти в меню", EAbrakhin::go_back, &EAbrakhin::STUDY
};

namespace {
	const EAbrakhin::MenuItem* algebra_children[] = {
		&EAbrakhin::ALGEBRA_GO_BACK,
		&EAbrakhin::ALGEBRA_SUMM,
		&EAbrakhin::ALGEBRA_SUBSTRACT,
		&EAbrakhin::ALGEBRA_MULTIPLY,
		&EAbrakhin::ALGEBRA_DIVIDE,
	};
	const int algebra_size = sizeof(algebra_children) / sizeof(algebra_children[0]);
}

const EAbrakhin::MenuItem EAbrakhin::ALGEBRA = {
	"1 - Алгебра", EAbrakhin::show_menu, &EAbrakhin::STUDY, algebra_children, algebra_size
};

const EAbrakhin::MenuItem EAbrakhin::ALGEBRA_SUMM = { 
	"1 - Складывать", EAbrakhin::algebra_summ, &EAbrakhin::ALGEBRA
};
const EAbrakhin::MenuItem EAbrakhin::ALGEBRA_SUBSTRACT = { 
	"2 - Вычитать", EAbrakhin::algebra_substract, &EAbrakhin::ALGEBRA
};
const EAbrakhin::MenuItem EAbrakhin::ALGEBRA_MULTIPLY = { 
	"3 - Умножать", EAbrakhin::algebra_multiply, &EAbrakhin::ALGEBRA
};
const EAbrakhin::MenuItem EAbrakhin::ALGEBRA_DIVIDE = { 
	"4 - Делить", EAbrakhin::algebra_divide, &EAbrakhin::ALGEBRA
};
const EAbrakhin::MenuItem EAbrakhin::ALGEBRA_GO_BACK = {
	"0 - Назад", EAbrakhin::go_back, &EAbrakhin::ALGEBRA
};

namespace {
	const EAbrakhin::MenuItem* mathematical_analysis_children[] = {
		&EAbrakhin::MATHAN_GO_BACK,
		&EAbrakhin::MATHAN_DIFFERENTIATION,
		&EAbrakhin::MATHAN_INTEGRATION
	};
	const int mathematical_analysis_size = sizeof(mathematical_analysis_children) / sizeof(mathematical_analysis_children[0]);
}

const EAbrakhin::MenuItem EAbrakhin::MATHEMATICAL_ANALYSIS = {
	"2 - Математический анализ", EAbrakhin::show_menu, &EAbrakhin::STUDY, mathematical_analysis_children, mathematical_analysis_size
};

const EAbrakhin::MenuItem EAbrakhin::MATHAN_DIFFERENTIATION = {
	"1 - Дифференцировать", EAbrakhin::mathan_differentiation, &EAbrakhin::MATHEMATICAL_ANALYSIS
};
const EAbrakhin::MenuItem EAbrakhin::MATHAN_INTEGRATION = {
	"2 - Интегрировать", EAbrakhin::mathan_integration, &EAbrakhin::MATHEMATICAL_ANALYSIS
};
const EAbrakhin::MenuItem EAbrakhin::MATHAN_GO_BACK = {
	"0 - Назад", EAbrakhin::go_back, &EAbrakhin::MATHEMATICAL_ANALYSIS
};
