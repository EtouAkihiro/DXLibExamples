#include "DxLib.h"
#include "Game.h"

// メイン関数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
	// 画面モードの設定
	SetGraphMode(640, 320, 32);
	// ウィンドウサイズの設定
	SetWindowSize(640, 320);
	// フルスクリーン表示かウィンドウ表示か
	ChangeWindowMode(TRUE);
	// マウスカーソルの表示(TRUE)・非表示(FALSE)
	SetMouseDispFlag(TRUE);
	// ウィンドウ名
	SetMainWindowText("DXlib");

	// DXライブらい初期化
	if (DxLib_Init() == -1) 
	{
		return -1;
	}

	// ゲームクラス
	Game game;

	// ゲームクラスの初期化
	game.Init();

	// メインループ
	while (true)
	{
		// 画面に書かれているものを全て消す
		ClearDrawScreen();

		// ゲームクラスの更新
		game.Update();
		
		// ゲームクラスの描画
		game.Draw();

		// 裏画面の内容を表画面に反映させる
		ScreenFlip();
	}

	WaitKey();

	DxLib_End();

	return 0;
}