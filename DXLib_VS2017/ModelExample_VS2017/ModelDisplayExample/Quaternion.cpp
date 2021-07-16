#include "Quaternion.h"

float kEpsilon = 0.00001F;

// コンストラクタ
Quaternion::Quaternion(float x, float y, float z, float w) :
	x{ x }, y{ y }, z{ z }, w{ w }{
}

// 回転を組み合わせる
Quaternion operator*(Quaternion& lhs, Quaternion& rhs)
{
	return Quaternion(
		lhs.w * rhs.x + lhs.x * rhs.w + lhs.y * rhs.z - lhs.z * rhs.y,
		lhs.w * rhs.y + lhs.y * rhs.w + lhs.z * rhs.x - lhs.x * rhs.z,
		lhs.w * rhs.z + lhs.z * rhs.w + lhs.x * rhs.y - lhs.y * rhs.x,
		lhs.w * rhs.w - lhs.x * rhs.x - lhs.y * rhs.y - lhs.z * rhs.z);
}

Vector3 operator*(Quaternion rotation, Vector3 & point)
{
	return Vector3();
}
