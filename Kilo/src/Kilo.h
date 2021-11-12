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

	std::cout << "Kilo Runtime Engine" << std::endl;
	Kilo::UI::UIWindow ui;

	ui.Create(1000,1000, "Tyler");
	while (!ui.Closing()) {
		ui.Poll();
		ui.Clear();
		ui.NewFrame();

		ui.RenderFrame();
		ui.Render();
	}
}
#endif
