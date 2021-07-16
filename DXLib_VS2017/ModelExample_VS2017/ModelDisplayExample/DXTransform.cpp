#include "DXTransform.h"

// �f�X�g���N�^
DXTransform::~DXTransform()
{
}

// ���[���h���W��ݒ�
void DXTransform::Position(VECTOR position)
{
	this->position = position;
}

// ���[���h���W���擾
VECTOR DXTransform::Position() const
{
	return this->position;
}

// ���[�J�����W��ݒ�
void DXTransform::LocalPosition(VECTOR localPosition)
{
	this->local_position = localPosition;
}

// ���[�J�����W���擾
VECTOR DXTransform::LocalPosition() const
{
	return this->local_position;
}

// ���[���h�̉�]��ݒ�
void DXTransform::Rotation(VECTOR rotation)
{
	this->rotation = rotation;
}

// ���[���h�̉�]���擾
VECTOR DXTransform::Rotation() const
{
	return this->rotation;
}

// ���[�J���̉�]��ݒ�
void DXTransform::LocalRotation(VECTOR localRotation)
{
	this->local_rotation = localRotation;
}

// ���[�J���̉�]���擾
VECTOR DXTransform::LocalRotation() const
{
	return this->local_rotation;
}

// ���[���h�̃X�P�[���l��ݒ�
void DXTransform::Scale(VECTOR scale)
{
	this->scale = scale;
}

// ���[���h�̃X�P�[���l���擾
VECTOR DXTransform::Scale() const
{
	return this->scale;
}

// ���[�J���̃X�P�[���l��ݒ�
void DXTransform::LocalScale(VECTOR localScale)
{
	this->local_scale = localScale;
}

// ���[�J���̃X�P�[���l���擾
VECTOR DXTransform::LocalScale() const
{
	return this->local_scale;
}

// �O�����������擾
VECTOR DXTransform::Forward() const
{
	return VECTOR();
}

VECTOR DXTransform::Right() const
{
	return VECTOR();
}

VECTOR DXTransform::Up() const
{
	return VECTOR();
}

void DXTransform::LookAt(DXTransform target, VECTOR worldUp)
{
}

void DXTransform::LookAt(DXTransform target)
{
}

void DXTransform::LookAt(VECTOR worldPosition, VECTOR worldUp)
{
}

void DXTransform::LookAt(VECTOR worldPosition)
{
}

void DXTransform::SetParent(DXTransform * parent, bool world_position_stays)
{
}

void DXTransform::detachParent()
{
}
