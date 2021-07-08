#include "DxLib.h"
#include "Game.h"

// ���C���֐�
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) 
{
	// ��ʃ��[�h�̐ݒ�
	SetGraphMode(640, 320, 32);
	// �E�B���h�E�T�C�Y�̐ݒ�
	SetWindowSize(640, 320);
	// �t���X�N���[���\�����E�B���h�E�\����
	ChangeWindowMode(TRUE);
	// �}�E�X�J�[�\���̕\��(TRUE)�E��\��(FALSE)
	SetMouseDispFlag(TRUE);
	// �E�B���h�E��
	SetMainWindowText("DXlib");

	// DX���C�u�炢������
	if (DxLib_Init() == -1) 
	{
		return -1;
	}

	// �Q�[���N���X
	Game game;

	// �Q�[���N���X�̏�����
	game.Init();

	// ���C�����[�v
	while (true)
	{
		// ��ʂɏ�����Ă�����̂�S�ď���
		ClearDrawScreen();

		// �Q�[���N���X�̍X�V
		game.Update();
		
		// �Q�[���N���X�̕`��
		game.Draw();

		// ����ʂ̓��e��\��ʂɔ��f������
		ScreenFlip();
	}

	// �Q�[���N���X�̏I��
	game.End();

	DxLib_End();

	return 0;
}