#pragma once

namespace EAbrakhin {
	struct MenuItem {
		const char* const title;
		void (*func)();
	};
}
