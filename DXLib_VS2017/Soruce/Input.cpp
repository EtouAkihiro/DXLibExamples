#include "Input.h"
#include "DxLib.h"

int Input::m_PrevState{ 0 };
int Input::m_CurrentState{ 0 };

// 初期化
void Input::Init()
{
	m_PrevState = 0;
	m_CurrentState = 0;
}

// 更新
void Input::Update()
{
	// 状態の更新
	m_PrevState = m_CurrentState;
	m_CurrentState = DX_INPUT_PAD1;
}

// 現在のキー入力状態
bool Input::GetButton(int buttonId)
{
	return (m_CurrentState & buttonId) != 0;
}

// ボタンが押した
bool Input::GetButtonDown(int buttonId)
{
	return ((m_CurrentState & buttonId) & ~(m_PrevState & buttonId)) != 0;
}

// ボタンが押された
bool Input::GetButtonUp(int buttonId)
{
	return ((m_PrevState & buttonId) & ~(m_CurrentState & buttonId)) != 0;
}
