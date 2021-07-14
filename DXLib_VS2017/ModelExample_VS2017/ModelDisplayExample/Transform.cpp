#include "Transform.h"

// �f�X�g���N�^
Transform::~Transform()
{
}

// ���[���h���W��ݒ�
void Transform::Position(VECTOR position)
{
	this->position = position;
}

// ���[���h���W���擾
VECTOR Transform::Position() const
{
	return this->position;
}

// ���[�J�����W��ݒ�
void Transform::LocalPosition(VECTOR localPosition)
{
	this->local_position = localPosition;
}

// ���[�J�����W���擾
VECTOR Transform::LocalPosition() const
{
	return this->local_position;
}

// ���[���h�̉�]��ݒ�
void Transform::Rotation(VECTOR rotation)
{
	this->rotation = rotation;
}

// ���[���h�̉�]���擾
VECTOR Transform::Rotation() const
{
	return this->rotation;
}

// ���[�J���̉�]��ݒ�
void Transform::LocalRotation(VECTOR localRotation)
{
	this->local_rotation = localRotation;
}

// ���[�J���̉�]���擾
VECTOR Transform::LocalRotation() const
{
	return this->local_rotation;
}

// ���[���h�̃X�P�[���l��ݒ�
void Transform::Scale(VECTOR scale)
{
	this->scale = scale;
}

// ���[���h�̃X�P�[���l���擾
VECTOR Transform::Scale() const
{
	return this->scale;
}

// ���[�J���̃X�P�[���l��ݒ�
void Transform::LocalScale(VECTOR localScale)
{
	this->local_scale = localScale;
}

// ���[�J���̃X�P�[���l���擾
VECTOR Transform::LocalScale() const
{
	return this->local_scale;
}

// �O����������ݒ�
void Transform::Forward(VECTOR forward)
{
}

// �O�����������擾
VECTOR Transform::Forward() const
{
}

void Transform::Right(VECTOR right)
{
}

VECTOR Transform::Right() const
{
	return VECTOR();
}

void Transform::Up(VECTOR up)
{
}

VECTOR Transform::Up() const
{
	return VECTOR();
}

void Transform::LookAt(Transform target, VECTOR worldUp)
{
}

void Transform::LookAt(Transform target)
{
}

void Transform::LookAt(VECTOR worldPosition, VECTOR worldUp)
{
}

void Transform::LookAt(VECTOR worldPosition)
{
}

void Transform::SetParent(Transform * parent, bool world_position_stays)
{
}

void Transform::detachParent()
{
}
