#include "Input.h"
#include "DxLib.h"

int Input::m_PrevState{ 0 };
int Input::m_CurrentState{ 0 };

// ������
void Input::Init()
{
	m_PrevState = 0;
	m_CurrentState = 0;
}

// �X�V
void Input::Update()
{
	// ��Ԃ̍X�V
	m_PrevState = m_CurrentState;
	m_CurrentState = DX_INPUT_PAD1;
}

// ���݂̃L�[���͏��
bool Input::GetButton(int buttonId)
{
	return (m_CurrentState & buttonId) != 0;
}

// �{�^����������
bool Input::GetButtonDown(int buttonId)
{
	return ((m_CurrentState & buttonId) & ~(m_PrevState & buttonId)) != 0;
}

// �{�^���������ꂽ
bool Input::GetButtonUp(int buttonId)
{
	return ((m_PrevState & buttonId) & ~(m_CurrentState & buttonId)) != 0;
}
