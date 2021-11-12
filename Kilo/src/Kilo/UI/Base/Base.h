#pragma once
#include <Kilo/Core/Core.h>
#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>

namespace Kilo::UI {
	namespace Base {
		void init_gl_core(int, int);

		struct window {
		public:
			window();

			void create(int, int, const char *);

			void render();

			bool closing();

			void clear();

			void poll_events();
			
			void new_frame();

			void render_frame();

			void rgba(float r, float g, float b, float a);

			void viewport(int x0, int y0, int x1, int y1);

			void release_context();

			void release_window();

			~window();

		protected:
			bool m_is_current = false;

		private:
			void current();

			GLFWwindow			*m_window;

			struct {
				int width, height;
			} m_dimension;

			struct {
				int x0, y0, x1, y1;
			} m_view;
		};

	}
}
