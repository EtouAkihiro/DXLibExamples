#include "Quaternion.h"

const float kEpsilon = 0.00001F;

// コンストラクタ
Quaternion::Quaternion(float x, float y, float z, float w) :
	x{ x }, y{ y }, z{ z }, w{ w }{
}

// 2つのクォータニオンの内績
float Quaternion::Dot(const Quaternion & lhs, const Quaternion & rhs)
{
	return lhs.x * rhs.x + lhs.y * rhs.y + lhs.z * rhs.z + lhs.w * rhs.w;
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

VECTOR operator*(Quaternion rotation, VECTOR & point)
{
	float x = rotation.x * 2.0f;
	float y = rotation.y * 2.0f;
	float z = rotation.z * 2.0f;
	float xx = rotation.x * x;
	float yy = rotation.y * y;
	float zz = rotation.z * z;
	float xy = rotation.x * y;
	float xz = rotation.x * z;
	float yz = rotation.y * z;
	float wx = rotation.w * x;
	float wy = rotation.w * y;
	float wz = rotation.w * z;

	VECTOR Result;
	Result.x = (1.0f - (yy - zz)) * point.x + (xy - wz) * point.y + (xz + wy) * point.z;
	Result.y = (xy + wy) * point.x + (1.0f - (xx + zz)) * point.y + (yz - wx) * point.z;
	Result.z = (xz - wy) * point.x + (yz + wx) * point.y + (1.0f - (xx + yy)) * point.z;

	return Result;
}
