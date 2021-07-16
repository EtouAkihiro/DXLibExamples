#include "DXTransform.h"

// デストラクタ
DXTransform::~DXTransform()
{
}

// ワールド座標を設定
void DXTransform::Position(VECTOR position)
{
	this->position = position;
}

// ワールド座標を取得
VECTOR DXTransform::Position() const
{
	return this->position;
}

// ローカル座標を設定
void DXTransform::LocalPosition(VECTOR localPosition)
{
	this->local_position = localPosition;
}

// ローカル座標を取得
VECTOR DXTransform::LocalPosition() const
{
	return this->local_position;
}

// ワールドの回転を設定
void DXTransform::Rotation(VECTOR rotation)
{
	this->rotation = rotation;
}

// ワールドの回転を取得
VECTOR DXTransform::Rotation() const
{
	return this->rotation;
}

// ローカルの回転を設定
void DXTransform::LocalRotation(VECTOR localRotation)
{
	this->local_rotation = localRotation;
}

// ローカルの回転を取得
VECTOR DXTransform::LocalRotation() const
{
	return this->local_rotation;
}

// ワールドのスケール値を設定
void DXTransform::Scale(VECTOR scale)
{
	this->scale = scale;
}

// ワールドのスケール値を取得
VECTOR DXTransform::Scale() const
{
	return this->scale;
}

// ローカルのスケール値を設定
void DXTransform::LocalScale(VECTOR localScale)
{
	this->local_scale = localScale;
}

// ローカルのスケール値を取得
VECTOR DXTransform::LocalScale() const
{
	return this->local_scale;
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

void DXTransform::SetParent(DXTransform * parent, bool world_position_stays)
{
}

void DXTransform::detachParent()
{
}
