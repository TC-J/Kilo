#pragma once
#include <system_error>
#include <functional>
#include <unordered_map>
#include <tuple>
#include <iostream>
#include <Kilo/UI/UI.h>

namespace Kilo {

	class Runtime {
	public:
	};

}


#ifndef DLL

int main() {
	init_glfw();
	std::cout << "Kilo Runtime Engine" << std::endl;


	while (true);
}
#endif
