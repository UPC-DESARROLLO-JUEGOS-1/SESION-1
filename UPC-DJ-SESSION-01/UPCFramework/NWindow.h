#pragma once

#include <SDL/SDL.h>
#include <GL/glew.h>
#include <string>

//namespace UPC {
	class NWindow
	{
	public:
		NWindow();
		~NWindow();

		int GetScreenWidth() { mScreenWidth; }
		int GetScreenHeight() { mScreenHeight; }

		void Update();
		void Present();

		int Create(const std::string windowName, int screenWidth, int screenHeight, unsigned int windowFlags);

	private:
		int mScreenWidth;
		int mScreenHeight;
		
		SDL_Window* mWindow;
	};
//}
