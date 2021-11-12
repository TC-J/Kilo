
#include "Base.h"

#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include <imgui.h>
#include <imgui_impl_opengl3.h>
#include <imgui_impl_glfw.h>

using namespace Kilo::UI::Base;

namespace Kilo::UI::Base {
	static bool initialized = false;

	void init_gl_core(int major, int minor) {
		if (!initialized)
			if (!glfwInit()) throw "";
			else initialized = true;

		glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, major);
		glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, minor);
		glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	}

	void Terminate() {
		glfwTerminate();
	}

	void window::create(int w, int h, const char* title) {
		m_dimension.width = w;
		m_dimension.height = h;

		m_window = glfwCreateWindow(w, h, title, nullptr, nullptr);
		if (m_window == nullptr) throw "Window Null";

		this->current();
		glfwSwapInterval(1);

		if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) throw "GL Loader Error";

		IMGUI_CHECKVERSION();
		ImGui::CreateContext();

		ImGui::StyleColorsDark();

		ImGui_ImplGlfw_InitForOpenGL(m_window, true);
		ImGui_ImplOpenGL3_Init(nullptr);
	}

	void window::current() {
		if (!m_is_current) {
			glfwMakeContextCurrent(m_window);
			m_is_current = true;
		}
	}

	bool window::closing() { return (bool)glfwWindowShouldClose(m_window); }

	void window::clear() { glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); }

	void window::render() {
		glfwSwapBuffers(m_window);
	}

	void window::rgba(float r, float g, float b, float a) { glClearColor(r, g, b, a);  }


	void window::poll_events() { glfwPollEvents(); }

	void window::new_frame() {
		ImGui_ImplOpenGL3_NewFrame();
		ImGui_ImplGlfw_NewFrame();
		ImGui::NewFrame();
	}

	void window::render_frame() {
		ImGui::Render();
		ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
	}

	void window::viewport(int x0, int y0, int x1, int y1) { glViewport(x0, y1, y0, y1);}

	void window::release_context() { 
		ImGui_ImplOpenGL3_Shutdown();
		ImGui_ImplGlfw_Shutdown();
		ImGui::DestroyContext();
	}

	void window::release_window() { glfwDestroyWindow(m_window); }

	window::window() { init_gl_core(4,5);  }

	window::~window() {}
}
