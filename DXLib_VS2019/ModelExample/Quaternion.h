#ifndef QUATERNION_H_
#define QUATERNION_H_

#include "DxLib.h"

// クォータ二オン
struct Quaternion
{
	// X軸
	float x{ 0.0f };
	// Y軸
	float y{ 0.0f };
	// Z軸
	float z{ 0.0f };
	// 角度
	float w{ 0.0f };

	// デフォルトコンストラクタ
	Quaternion() = default;
	// コンストラクタ
	Quaternion(float x, float y, float z, float w);

	// 2つのクォータニオンの内績
	static float Dot(const Quaternion& lhs, const Quaternion& rhs);

private:
	// 現在使用しているクォータニオンの内績
	static bool IsEqualUsingDot(float dot);
};

// 2項目演算子オーバーロード
Quaternion operator*(Quaternion& lhs, Quaternion& rhs);
VECTOR operator * (Quaternion rotation, VECTOR& point);

#endif // !QUATERNION_H_
