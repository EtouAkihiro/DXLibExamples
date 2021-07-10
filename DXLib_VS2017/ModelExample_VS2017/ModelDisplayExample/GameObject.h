#ifndef GAME_OBJECT_H_
#define GAME_OBJECT_H_

// �Q�[���I�u�W�F�N�g�N���X�i���N���X�j
class GameObject
{
	// �R���X�g���N�^
	GameObject() = default;
	// �f�X�g���N�^
	virtual ~GameObject() = default;

	// �X�V
	virtual void Update();
	// �`��
	virtual void Draw();
};

#endif // !GAME_OBJECT_H_
