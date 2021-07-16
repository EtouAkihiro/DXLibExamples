#ifndef QUATERNION_H_
#define QUATERNION_H_

#include "Vector3.h"

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

	// クォータニオンの初期化
	Quaternion* QuaternionInit(Quaternion* pOut, float x, float y, float z, float w);

private:
	
};

// 2項目演算子オーバーロード
Quaternion operator*(Quaternion& lhs, Quaternion& rhs);
Vector3 operator * (Quaternion rotation, Vector3& point);

#endif // !QUATERNION_H_
