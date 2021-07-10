#include <algorithm>

#include "Vector3.h"

// �R���X�g���N�^
Vector3::Vector3(float x, float y, float z)
	:x{ x }, y{ y }, z{ z }
{
}

// 2�̃x�N�g���̓���
float Vector3::Dot(const Vector3 & lhs, const Vector3 & rhs)
{
	return { (lhs.x * rhs.x) + (lhs.y * rhs.y) + (lhs.z * rhs.z) };
}

// 2�ׂ̂��܂�̊O��
Vector3 Vector3::Cress(const Vector3 & lhs, const Vector3 & rhs)
{
	return { ((lhs.y * rhs.z) - (lhs.z * rhs.y)),((lhs.z * rhs.x) - (lhs.x * rhs.z)),((lhs.x * rhs.y) - (lhs.y * rhs.x)) };
}

// �x�N�g���̒���
float Vector3::Magnitude() const
{
	return sqrt(x * x + y * y * z * z);
}

// ���K�������x�N�g����Ԃ�
Vector3 Vector3::Normalized() const
{
	return { x / sqrt(x * x + y * y + z * z), y / sqrt(x * x + y * y + z * z), z / sqrt(x * x + y * y + z * z) };
}

// �t�x�N�g��
Vector3 operator-(const Vector3 & v)
{
	return Vector3{ -v.x , -v.y, -v.z };
}

// ���Z
Vector3 operator+(const Vector3 & lhs, const Vector3 & rhs)
{
	return Vector3{ lhs.x + rhs.x , lhs.y + rhs.y, lhs.z + rhs.y };
}

// ���Z
Vector3 operator-(const Vector3 & lhs, const Vector3 & rhs)
{
	return Vector3{ lhs.x - rhs.x , lhs.y - rhs.y, lhs.z - rhs.y };
}

// �X�J���[�{ V * k
Vector3 operator*(const Vector3 & lhs, float rhs)
{
	return Vector3{ lhs.x * rhs , lhs.y * rhs, lhs.z * rhs };
}

// �X�J���[�{ k * V
Vector3 operator*(float lhs, const Vector3 & rhs)
{
	return Vector3{ lhs * rhs.x , lhs * rhs.y, lhs * rhs.z };
}

// �X�J���[�ŏ��Z
Vector3 operator/(const Vector3 & lhs, float rhs)
{
	return Vector3{ lhs.x / rhs , lhs.y / rhs, lhs.z / rhs };
}
