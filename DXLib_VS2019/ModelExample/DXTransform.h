#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include <list>

#include "DxLib.h"

// �g�����X�t�H�[���N���X
class DXTransform
{
public:
	// �f�t�H���g�R���X�g���N�^
	DXTransform() = default;
	// �f�X�g���N�^
	~DXTransform();

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

	// �O�����������擾
	VECTOR Forward() const;
	// �E�����������擾
	VECTOR Right() const;
	// ������������擾
	VECTOR Up() const;

	// ������Lookat
	void LookAt(VECTOR& target);

	// �e�̐ݒ�
	void SetParent(DXTransform* parent, bool world_position_stays);
	// �e���폜
	void detachParent();

private:
	// ���W(���[���h���W)
	VECTOR m_Position{ 0.0f,0.0f,0.0f };
	// ��](���[���h���W)
	VECTOR m_Rotation{ 0.0f,0.0f,0.0f };
	// �X�P�[���l(���[���h���W)
	VECTOR m_Scale{ 0.0f,0.0f,0.0f };
	// ���W(���[�J�����W)
	VECTOR m_Local_Position{ 0.0f,0.0f,0.0f };
	// ��](���[�J�����W)
	VECTOR m_Local_Rotation{ 0.0f,0.0,0.0f };
	// �X�P�[���l(���[�J�����W)
	VECTOR m_Local_Scale{ 0.0f,0.0f,0.0f };

	// �e�N���X
	DXTransform* parent = nullptr;

	// �q�N���X
	std::list<DXTransform*> childs;
};

#endif // !TRANSFORM_H?
