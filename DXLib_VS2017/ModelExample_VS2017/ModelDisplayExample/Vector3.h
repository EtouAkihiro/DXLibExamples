#ifndef VECTOR3_H_
#define VECTOR3_H_

struct Vector3
{
	// �x�N�g����X����
	float x{ 0.0f };
	// �x�N�g����Y����
	float y{ 0.0f };
	// �x�N�g����Z����
	float z{ 0.0f };

	// �f�t�H���g�R���X�g���N�^
	Vector3() = default;
	// �R���X�g���N�^
	Vector3(float x, float y, float z);

	// 2�̃x�N�g���̓���
	static float Dot(const Vector3& lhs, const Vector3& rhs);
	// 2�̃x�N�g���̊O��
	static Vector3 Cress(const Vector3& lhs, const Vector3& rhs);
	// �x�N�g���̒���
	float Magnitude() const;
	// ���K�������x�N�g����Ԃ�
	Vector3 Normalized() const;
};

// �P�����Z�q�I�[�o�[���[�h
Vector3 operator - (const Vector3& v);       // �t�x�N�g��
// 2�����Z�q�I�[�o�[���[�h
Vector3 operator + (const Vector3& lhs, const Vector3& rhs);  // ���Z
Vector3 operator - (const Vector3& lhs, const Vector3& rhs);  // ���Z
Vector3 operator * (const Vector3& lhs, float rhs);           // �X�J���[�{ V * k
Vector3 operator * (float lhs, const Vector3& rhs);           // �X�J���[�{ k * V
Vector3 operator / (const Vector3& lhs, float rhs);           // �X�J���[�ŏ��Z

#endif // !VECTOR3_H_
