#include "NGameApplication.h"

#include <iostream>
#include <UPCFramework\NEnumWindowFlags.h>


NGameApplication::NGameApplication() :
	mScreenWidth(800),
	mScreenHeight(600),
	mGameState(NEnumGameState::Running)
{
}

void temp()
{
	//Draw(); //jaja
}


void NGameApplication::Initialize() {
	// Creamos la ventana
	mWindow.Create("UPC - Desarrollo de Juegos", mScreenWidth, mScreenHeight,
		NEnumWindowFlags::Windowed);
}

void NGameApplication::Start() {
	// Inicializar nuesto juego
	Initialize();

	// Comienza el loop del juego
	DoGameLoop();
}

void NGameApplication::DoGameLoop() {
	while (mGameState != NEnumGameState::Exit)
	{
		mWindow.Update();

		Update();
		Draw();
	}
}

void NGameApplication::ProcessInputs() {
	SDL_Event evnt;

	while (SDL_PollEvent(&evnt))
	{
		switch (evnt.type) {
		case SDL_QUIT:

			break;
		case SDL_MOUSEMOTION:

			break;
		case SDL_KEYDOWN:
			switch (evnt.key.keysym.sym) {
			case SDLK_w:
				std::cout << "INPUT: W";
				break;
			}
			break;
		}
	}
}


void NGameApplication::Update() {
	
}

void NGameApplication::Draw() {
	glClearDepth(1.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	mWindow.Present();
}

NGameApplication::~NGameApplication()
{
}
