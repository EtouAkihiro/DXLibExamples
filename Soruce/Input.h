#ifndef INPUT_H_
#define INPUT_H_

// 入力クラス
static class Input 
{
public:
	// 初期化
	static void Init();
	// 更新
	static void Update();

	// 現在のキー入力状態
	static bool GetButton(int buttonId);
	// ボタンが押した
	static bool GetButtonDown(int buttonId);
	// ボタンが押された
	static bool GetButtonUp(int buttonId);
public:
	// 直前の状態
	static int m_PrevState;
	// 今の状態
	static int m_CurrentState;
};

#endif // !INPUT_H_
