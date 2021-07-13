#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include "DxLib.h"

// �g�����X�t�H�[���N���X
class Transform
{
private:
	enum 
	{
		Local,  // ���[�J��
		world,  // ���[���h
	};

public:
	// �f�t�H���g�R���X�g���N�^
	Transform() = default;
	// �f�X�g���N�^
	~Transform();

	// ���[���h���W��ݒ�
	void SetPosition(VECTOR position);
	// ���[���h���W���擾
	VECTOR GetPosition() const;

	// ���[�J�����W��ݒ�
	void SetLocalPosition(VECTOR localPosition);
	// ���[�J�����W���擾
	VECTOR GetLocalPosition() const;

	// ���[���h�̉�]��ݒ�
	void SetRotation(VECTOR rotation);
	// ���[���h�̉�]���擾
	VECTOR GetRotation() const;

	// ���[�J���̉�]��ݒ�
	void SetLocalRotation(VECTOR localRotation);
	// ���[�J���̉�]���擾
	VECTOR GetLocalRotation() const;

	// ���[���h�̃X�P�[���l��ݒ�
	void SetScale(VECTOR scale);
	// ���[���h�̃X�P�[���l���擾
	VECTOR GetScale() const;

	// ���[�J���̃X�P�[���l��ݒ�
	void SetLocalScale(VECTOR localScale);
	// ���[�J���̃X�P�[���l���擾
	VECTOR GetLocalScale() const;

	// �O����������ݒ�
	void SetForward(VECTOR forward);
	// �O�����������擾
	VECTOR GetForward() const;

	// �E����������ݒ�
	void SetRight(VECTOR right);
	// �E�����������擾
	VECTOR GetRight() const;

	// �����������ݒ�
	void SetUp(VECTOR up);
	// ������������擾
	VECTOR GetUp() const;

	// �I�u�W�F�N�g����������B
	void LookAt(Transform target, VECTOR worldUp);
	void LookAt(Transform target);
	// �ړ�����������B
	void LookAt(VECTOR worldPosition, VECTOR worldUp);
	void LookAt(VECTOR worldPosition);

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
};

#endif // !TRANSFORM_H?
