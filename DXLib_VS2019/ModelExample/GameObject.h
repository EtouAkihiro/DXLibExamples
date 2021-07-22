#ifndef GAME_OBJECT_H_
#define GAME_OBJECT_H_

#include "DxLib.h"
#include "DXTransform.h"
#include <string>

// �Q�[���I�u�W�F�N�g�N���X�i���N���X�j
class GameObject
{
public:
	// �R���X�g���N�^
	GameObject() = default;
	// �f�X�g���N�^
	virtual ~GameObject() = default;

	// �X�V
	virtual void Update();
	// �`��
	virtual void Draw();

	// ���S����
	void Die();
	// ���S���Ă��邩�H
	bool IsDead() const;
	// �^�O�����擾
	const std::string& Tag() const;
	// ���O���擾
	const std::string& Name() const;

	// �R�s�[�֎~
	GameObject(const GameObject& other) = delete;
	GameObject& operator = (const GameObject& other) = delete;

protected:
	// �^�O��
	std::string m_Tag;
	// ���O
	std::string m_Name;
	// �g�����X�t�H�[��
	DXTransform m_Transform;
	// ���S�t���O
	bool m_Dead{ false };
};

#endif // !GAME_OBJECT_H_
