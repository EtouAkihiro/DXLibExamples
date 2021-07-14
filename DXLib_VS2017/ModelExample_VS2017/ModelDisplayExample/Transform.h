#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include <list>

#include "DxLib.h"

// �g�����X�t�H�[���N���X
class Transform
{
public:
	// �f�t�H���g�R���X�g���N�^
	Transform() = default;
	// �f�X�g���N�^
	~Transform();

	// ���[���h���W��ݒ�
	void Position(VECTOR position);
	// ���[���h���W���擾
	VECTOR Position() const;

	// ���[�J�����W��ݒ�
	void LocalPosition(VECTOR localPosition);
	// ���[�J�����W���擾
	VECTOR LocalPosition() const;

	// ���[���h�̉�]��ݒ�
	void Rotation(VECTOR rotation);
	// ���[���h�̉�]���擾
	VECTOR Rotation() const;

	// ���[�J���̉�]��ݒ�
	void LocalRotation(VECTOR localRotation);
	// ���[�J���̉�]���擾
	VECTOR LocalRotation() const;

	// ���[���h�̃X�P�[���l��ݒ�
	void Scale(VECTOR scale);
	// ���[���h�̃X�P�[���l���擾
	VECTOR Scale() const;

	// ���[�J���̃X�P�[���l��ݒ�
	void LocalScale(VECTOR localScale);
	// ���[�J���̃X�P�[���l���擾
	VECTOR LocalScale() const;

	// �O����������ݒ�
	void Forward(VECTOR forward);
	// �O�����������擾
	VECTOR Forward() const;

	// �E����������ݒ�
	void Right(VECTOR right);
	// �E�����������擾
	VECTOR Right() const;

	// �����������ݒ�
	void Up(VECTOR up);
	// ������������擾
	VECTOR Up() const;

	
	void LookAt(Transform target, VECTOR worldUp);
	void LookAt(Transform target);
	void LookAt(VECTOR worldPosition, VECTOR worldUp);
	void LookAt(VECTOR worldPosition);

	// �e�̐ݒ�
	void SetParent(Transform* parent, bool world_position_stays);
	// �e���폜
	void detachParent();

private:
	// ���W(���[���h���W)
	VECTOR position{ 0.0f,0.0f,0.0f };
	// ��](���[���h���W)
	VECTOR rotation{ 0.0f,0.0f,0.0f };
	// �X�P�[���l(���[���h���W)
	VECTOR scale{ 0.0f,0.0f,0.0f };
	// ���W(���[�J�����W)
	VECTOR local_position{ 0.0f,0.0f,0.0f };
	// ��](���[�J�����W)
	VECTOR local_rotation{ 0.0f,0.0,0.0f };
	// �X�P�[���l(���[�J�����W)
	VECTOR local_scale{ 0.0f,0.0f,0.0f };

	// �e�N���X
	Transform* parent = nullptr;

	// �q�N���X
	std::list<Transform*> childs;
};

#endif // !TRANSFORM_H?
