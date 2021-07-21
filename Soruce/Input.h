#ifndef INPUT_H_
#define INPUT_H_

// ���̓N���X
static class Input 
{
public:
	// ������
	static void Init();
	// �X�V
	static void Update();

	// ���݂̃L�[���͏��
	static bool GetButton(int buttonId);
	// �{�^����������
	static bool GetButtonDown(int buttonId);
	// �{�^���������ꂽ
	static bool GetButtonUp(int buttonId);
public:
	// ���O�̏��
	static int m_PrevState;
	// ���̏��
	static int m_CurrentState;
};

#endif // !INPUT_H_
