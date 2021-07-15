#include "DxLib.h"
#include "Game.h"
#include "Screen.h"

// メイン関数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
	// 画面モードの設定
	SetGraphMode(Screen::Width, Screen::Height, 32);
	// ウィンドウサイズの設定
	SetWindowSize(Screen::Width, Screen::Height);
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
	game.Start();

	// メインループ
	while (ProcessMessage() == 0)
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

	// ゲームクラスの終了
	game.End();

	DxLib_End();

	return 0;
}