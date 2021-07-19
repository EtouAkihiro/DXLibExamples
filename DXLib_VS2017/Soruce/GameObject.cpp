#include "GameObject.h"

// 更新
void GameObject::Update() {}

// 描画
void GameObject::Draw() {}

// 死亡
void GameObject::Die()
{
	m_Dead = true;
}

// 死亡しているか？
bool GameObject::IsDead() const
{
	return m_Dead;
}

// タグ名を取得
const std::string & GameObject::Tag() const
{
	return m_Tag;
}

// 名前の取得
const std::string & GameObject::Name() const
{
	return m_Name;
}
