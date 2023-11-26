#include "menu_items.hpp"
#include "menu_functions.hpp"

const EAbrakhin::MenuItem EAbrakhin::STUDY_SUMM = { 
	"1 - Складывать", EAbrakhin::study_summ, &EAbrakhin::STUDY 
};
const EAbrakhin::MenuItem EAbrakhin::STUDY_SUBSTRACT = { 
	"2 - Вычитать", EAbrakhin::study_substract, &EAbrakhin::STUDY 
};
const EAbrakhin::MenuItem EAbrakhin::STUDY_MULTIPLY = { 
	"3 - Умножать", EAbrakhin::study_multiply, &EAbrakhin::STUDY 
};
const EAbrakhin::MenuItem EAbrakhin::STUDY_DIVIDE = { 
	"4 - Делить", EAbrakhin::study_divide, &EAbrakhin::STUDY 
};
const EAbrakhin::MenuItem EAbrakhin::STUDY_GO_BACK = {
	"0 - Выйти в меню", EAbrakhin::study_go_back, &EAbrakhin::STUDY 
};

namespace {
	const EAbrakhin::MenuItem* study_children[] = {
		&EAbrakhin::STUDY_GO_BACK,
		&EAbrakhin::STUDY_SUMM,
		&EAbrakhin::STUDY_SUBSTRACT,
		&EAbrakhin::STUDY_MULTIPLY,
		&EAbrakhin::STUDY_DIVIDE,
	};
	const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const EAbrakhin::MenuItem EAbrakhin::STUDY = {
	"1 - Математика", EAbrakhin::show_menu, &EAbrakhin::MAIN, study_children, study_size 
};
const EAbrakhin::MenuItem EAbrakhin::EXIT = {
	"0 - Выход", EAbrakhin::exit, &EAbrakhin::MAIN
};

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
