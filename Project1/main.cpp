#include<DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(true);
	DxLib_Init();

	SetWindowText(L"1916017_”’‘ë—T‘¾");
	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0 && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		ClsDrawScreen();
		ScreenFlip();
	}

	DxLib_End();

}
