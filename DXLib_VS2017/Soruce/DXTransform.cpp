#include "DXTransform.h"

// �f�X�g���N�^
DXTransform::~DXTransform()
{
}

// ���[���h���W��ݒ�
void DXTransform::Position(VECTOR position)
{
	this->m_Position = position;
}

// ���[���h���W���擾
VECTOR DXTransform::Position() const
{
	return this->m_Position;
}

// ���[�J�����W��ݒ�
void DXTransform::LocalPosition(VECTOR localPosition)
{
	this->m_Local_Position = localPosition;
}

// ���[�J�����W���擾
VECTOR DXTransform::LocalPosition() const
{
	return this->m_Local_Position;
}

// ���[���h�̉�]��ݒ�
void DXTransform::Rotation(VECTOR rotation)
{
	this->m_Rotation = rotation;
}

// ���[���h�̉�]���擾
VECTOR DXTransform::Rotation() const
{
	return this->m_Rotation;
}

// ���[�J���̉�]��ݒ�
void DXTransform::LocalRotation(VECTOR localRotation)
{
	this->m_Local_Rotation = localRotation;
}

// ���[�J���̉�]���擾
VECTOR DXTransform::LocalRotation() const
{
	return this->m_Local_Rotation;
}

// ���[���h�̃X�P�[���l��ݒ�
void DXTransform::Scale(VECTOR scale)
{
	this->m_Scale = scale;
}

// ���[���h�̃X�P�[���l���擾
VECTOR DXTransform::Scale() const
{
	return this->m_Scale;
}

// ���[�J���̃X�P�[���l��ݒ�
void DXTransform::LocalScale(VECTOR localScale)
{
	this->m_Local_Scale = localScale;
}

// ���[�J���̃X�P�[���l���擾
VECTOR DXTransform::LocalScale() const
{
	return this->m_Local_Scale;
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

// �e�̐ݒ�
void DXTransform::SetParent(DXTransform * parent, bool world_position_stays)
{
}

// �e���폜
void DXTransform::detachParent()
{
}
