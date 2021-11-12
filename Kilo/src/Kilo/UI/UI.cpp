#include "UI.h"
#include <iostream>
#include <imgui.h>
namespace Kilo::UI {

	UIWindow::UIWindow() {
		std::cout << "UIRuntime" << std::endl;
	}

	void SubWindow(const char* s) { ImGui::Begin(s); }
	void Text(const char* s) { ImGui::Text(s); }
	void Button(const char* s) { ImGui::Button(s); }
	void SubWindowEnd() { ImGui::End(); }

	void ShowDemo() { ImGui::ShowDemoWindow(); }

	void UIWindow::Create(int w, int h, const char* title) { this->create(w, h, title); }

	void UIWindow::RGBA(float r, float g, float b, float a) { this->rgba(r, g, b, a); }

	bool UIWindow::Closing() { return this->closing(); }

	void UIWindow::Render() { this->render(); }

	void UIWindow::NewFrame() { this->new_frame();  }

	void UIWindow::RenderFrame() { this->render_frame();  }

	void UIWindow::Poll() { this->poll_events(); }

	void UIWindow::View(int x0, int y0, int x1, int y1) { this->viewport(x0, y0, x1, y1); }

	void UIWindow::Clear() { this->clear(); }

	UIWindow::~UIWindow() { }
}
