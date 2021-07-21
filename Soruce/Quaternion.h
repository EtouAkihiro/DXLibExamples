#ifndef QUATERNION_H_
#define QUATERNION_H_

#include "DxLib.h"

// �N�H�[�^��I��
struct Quaternion
{
	// X��
	float x{ 0.0f };
	// Y��
	float y{ 0.0f };
	// Z��
	float z{ 0.0f };
	// �p�x
	float w{ 0.0f };

	// �f�t�H���g�R���X�g���N�^
	Quaternion() = default;
	// �R���X�g���N�^
	Quaternion(float x, float y, float z, float w);

	// 2�̃N�H�[�^�j�I���̓���
	static float Dot(const Quaternion& lhs, const Quaternion& rhs);

private:
	// ���ݎg�p���Ă���N�H�[�^�j�I���̓���
	static bool IsEqualUsingDot(float dot);
};

// 2���ډ��Z�q�I�[�o�[���[�h
Quaternion operator*(Quaternion& lhs, Quaternion& rhs);
VECTOR operator * (Quaternion rotation, VECTOR& point);

#endif // !QUATERNION_H_