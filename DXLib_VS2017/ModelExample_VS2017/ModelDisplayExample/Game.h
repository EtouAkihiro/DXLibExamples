#ifndef GAME_H_
#define GAME_H_

class Game 
{
public:
	// �R���X�g���N�^
	Game() = default;
	// �f�X�g���N�^
	~Game() = default;

	// ������
	void Init();
	// �X�V
	void Update();
	// �`��
	void Draw();
	// �I��
	void End();
};

#endif // !GAME_H?
