#include "UI.h"

#include <GLFW/glfw3.h>
#include <imgui.h>

#include <iostream>


void init_glfw() {
	if (glfwInit()) {
		std::cout << "GLFW Initialized" << std::endl;
	}
}

