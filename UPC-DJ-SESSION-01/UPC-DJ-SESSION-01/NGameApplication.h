#pragma once

#include <UPCFramework\NWindow.h>

enum NEnumGameState {
	Running,
	Exit
};

class NGameApplication
{
public:
	NGameApplication();
	~NGameApplication();

	void Start();
private:
	int mScreenWidth;
	int mScreenHeight;
	NEnumGameState mGameState;

	NWindow mWindow;

	void Initialize();
	void DoGameLoop();

	// In loop process
	void ProcessInputs();
	void Update();
	void Draw();
};