#pragma once

#include <Kilo/Core/Core.h>
#include <Kilo/UI/Base/Base.h>


namespace Kilo::UI {

	class KILO_API UIWindow: private Kilo::UI::Base::window {
	public:
		UIWindow();
		void Create(int,int,const char *);
		void RGBA(float, float, float, float);
		bool Closing();
		void Render();
		void NewFrame();
		void RenderFrame();
		void Poll();
		void View(int, int, int, int);
		void Clear();
		~UIWindow();
	};

}
