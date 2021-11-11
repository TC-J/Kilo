#pragma once
#include <system_error>
#include <functional>
#include <unordered_map>
#include <tuple>
#include <iostream>
#pragma once
#include <Kilo/Core/Core.h>


namespace Kilo {

	class Runtime {
	public:
	};

}

#ifndef DLL

int main() {
	std::cout << "Kilo Runtime Engine" << std::endl;
	while (true);
}
#endif
