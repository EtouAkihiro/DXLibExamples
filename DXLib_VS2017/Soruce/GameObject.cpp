#include "GameObject.h"

// �X�V
void GameObject::Update() {}

// �`��
void GameObject::Draw() {}

// ���S
void GameObject::Die()
{
	m_Dead = true;
}

// ���S���Ă��邩�H
bool GameObject::IsDead() const
{
	return m_Dead;
}

// �^�O�����擾
const std::string & GameObject::Tag() const
{
	return m_Tag;
}

// ���O�̎擾
const std::string & GameObject::Name() const
{
	return m_Name;
}
