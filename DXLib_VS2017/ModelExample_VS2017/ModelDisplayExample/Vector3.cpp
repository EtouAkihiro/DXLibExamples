#include <algorithm>

#include "Vector3.h"

// コンストラクタ
Vector3::Vector3(float x, float y, float z)
	:x{ x }, y{ y }, z{ z }
{
}

// 2つのベクトルの内績
float Vector3::Dot(const Vector3 & lhs, const Vector3 & rhs)
{
	return { (lhs.x * rhs.x) + (lhs.y * rhs.y) + (lhs.z * rhs.z) };
}

// 2つのべく折るの外積
Vector3 Vector3::Cress(const Vector3 & lhs, const Vector3 & rhs)
{
	return { ((lhs.y * rhs.z) - (lhs.z * rhs.y)),((lhs.z * rhs.x) - (lhs.x * rhs.z)),((lhs.x * rhs.y) - (lhs.y * rhs.x)) };
}

// ベクトルの長さ
float Vector3::Magnitude() const
{
	return sqrt(x * x + y * y * z * z);
}

// 正規化したベクトルを返す
Vector3 Vector3::Normalized() const
{
	return { x / sqrt(x * x + y * y + z * z), y / sqrt(x * x + y * y + z * z), z / sqrt(x * x + y * y + z * z) };
}

// Vector3(0.0f,0.0f,0.0f)と同じ意味
Vector3 Vector3::Zero() const
{
	return Vector3(0.0f, 0.0f, 0.0f);
}

// Vector3(1.0f,1.0f,1.0f)と同じ意味
Vector3 Vector3::One() const 
{
	return Vector3(1.0f, 1.0f, 1.0f);
}

// Vector3(0.0f,1.0f,0.0f)と同じ意味
Vector3 Vector3::Up() const
{
	return Vector3(0.0f, 1.0f, 0.0f);
}

// Vector3(0.0f,-1.0f,0.0f)と同じ意味
Vector3 Vector3::Down() const
{
	return Vector3(0.0f, -1.0f, 0.0f);
}

// Vector3(-1.0f,0.0f,0.0f)と同じ意味
Vector3 Vector3::Left() const
{
	return Vector3(-1.0f, 0.0f, 0.0f);
}

// Vector3(1.0f,0.0f,0.0f)と同じ意味
Vector3 Vector3::Right() const
{
	return Vector3(1.0f, 0.0f, 0.0f);
}

// Vector3(0.0f,0.0f,1.0f)と同じ意味
Vector3 Vector3::Forward() const
{
	return Vector3(0.0f, 0.0f, 1.0f);
}

// Vector3(0.0f,0.0f,-1.0f)と同じ意味
Vector3 Vector3::Back() const
{
	return Vector3(0.0f, 0.0f, -1.0f);
}


// 逆ベクトル
Vector3 operator-(const Vector3 & v)
{
	return Vector3{ -v.x , -v.y, -v.z };
}

// 加算
Vector3 operator+(const Vector3 & lhs, const Vector3 & rhs)
{
	return Vector3{ lhs.x + rhs.x , lhs.y + rhs.y, lhs.z + rhs.y };
}

// 減算
Vector3 operator-(const Vector3 & lhs, const Vector3 & rhs)
{
	return Vector3{ lhs.x - rhs.x , lhs.y - rhs.y, lhs.z - rhs.y };
}

// スカラー倍 V * k
Vector3 operator*(const Vector3 & lhs, float rhs)
{
	return Vector3{ lhs.x * rhs , lhs.y * rhs, lhs.z * rhs };
}

// スカラー倍 k * V
Vector3 operator*(float lhs, const Vector3 & rhs)
{
	return Vector3{ lhs * rhs.x , lhs * rhs.y, lhs * rhs.z };
}

// スカラーで除算
Vector3 operator/(const Vector3 & lhs, float rhs)
{
	return Vector3{ lhs.x / rhs , lhs.y / rhs, lhs.z / rhs };
}
