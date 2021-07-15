#include "Transform.h"

// デストラクタ
Transform::~Transform()
{
}

// ワールド座標を設定
void Transform::Position(VECTOR position)
{
	this->position = position;
}

// ワールド座標を取得
VECTOR Transform::Position() const
{
	return this->position;
}

// ローカル座標を設定
void Transform::LocalPosition(VECTOR localPosition)
{
	this->local_position = localPosition;
}

// ローカル座標を取得
VECTOR Transform::LocalPosition() const
{
	return this->local_position;
}

// ワールドの回転を設定
void Transform::Rotation(VECTOR rotation)
{
	this->rotation = rotation;
}

// ワールドの回転を取得
VECTOR Transform::Rotation() const
{
	return this->rotation;
}

// ローカルの回転を設定
void Transform::LocalRotation(VECTOR localRotation)
{
	this->local_rotation = localRotation;
}

// ローカルの回転を取得
VECTOR Transform::LocalRotation() const
{
	return this->local_rotation;
}

// ワールドのスケール値を設定
void Transform::Scale(VECTOR scale)
{
	this->scale = scale;
}

// ワールドのスケール値を取得
VECTOR Transform::Scale() const
{
	return this->scale;
}

// ローカルのスケール値を設定
void Transform::LocalScale(VECTOR localScale)
{
	this->local_scale = localScale;
}

// ローカルのスケール値を取得
VECTOR Transform::LocalScale() const
{
	return this->local_scale;
}

// 前向き方向を設定
void Transform::Forward(VECTOR forward)
{
}

// 前向き方向を取得
VECTOR Transform::Forward() const
{
	return VECTOR();
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
