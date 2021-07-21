#include "DXTransform.h"

// デストラクタ
DXTransform::~DXTransform()
{
}

// ワールド座標を設定
void DXTransform::Position(VECTOR position)
{
	this->m_Position = position;
}

// ワールド座標を取得
VECTOR DXTransform::Position() const
{
	return this->m_Position;
}

// ローカル座標を設定
void DXTransform::LocalPosition(VECTOR localPosition)
{
	this->m_Local_Position = localPosition;
}

// ローカル座標を取得
VECTOR DXTransform::LocalPosition() const
{
	return this->m_Local_Position;
}

// ワールドの回転を設定
void DXTransform::Rotation(VECTOR rotation)
{
	this->m_Rotation = rotation;
}

// ワールドの回転を取得
VECTOR DXTransform::Rotation() const
{
	return this->m_Rotation;
}

// ローカルの回転を設定
void DXTransform::LocalRotation(VECTOR localRotation)
{
	this->m_Local_Rotation = localRotation;
}

// ローカルの回転を取得
VECTOR DXTransform::LocalRotation() const
{
	return this->m_Local_Rotation;
}

// ワールドのスケール値を設定
void DXTransform::Scale(VECTOR scale)
{
	this->m_Scale = scale;
}

// ワールドのスケール値を取得
VECTOR DXTransform::Scale() const
{
	return this->m_Scale;
}

// ローカルのスケール値を設定
void DXTransform::LocalScale(VECTOR localScale)
{
	this->m_Local_Scale = localScale;
}

// ローカルのスケール値を取得
VECTOR DXTransform::LocalScale() const
{
	return this->m_Local_Scale;
}

// 前向き方向を取得
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

// 親の設定
void DXTransform::SetParent(DXTransform * parent, bool world_position_stays)
{
}

// 親を削除
void DXTransform::detachParent()
{
}
