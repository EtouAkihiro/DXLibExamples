#ifndef VECTOR3_H_
#define VECTOR3_H_

struct Vector3
{
	// ベクトルのX成分
	float x{ 0.0f };
	// ベクトルのY成分
	float y{ 0.0f };
	// ベクトルのZ成分
	float z{ 0.0f };

	// デフォルトコンストラクタ
	Vector3() = default;
	// コンストラクタ
	Vector3(float x, float y, float z);

	// 2つのベクトルの内績
	static float Dot(const Vector3& lhs, const Vector3& rhs);
	// 2つのベクトルの外積
	static Vector3 Cress(const Vector3& lhs, const Vector3& rhs);
	// ベクトルの長さ
	float Magnitude() const;
	// 正規化したベクトルを返す
	Vector3 Normalized() const;
};

// 単項演算子オーバーロード
Vector3 operator - (const Vector3& v);       // 逆ベクトル
// 2項演算子オーバーロード
Vector3 operator + (const Vector3& lhs, const Vector3& rhs);  // 加算
Vector3 operator - (const Vector3& lhs, const Vector3& rhs);  // 減算
Vector3 operator * (const Vector3& lhs, float rhs);           // スカラー倍 V * k
Vector3 operator * (float lhs, const Vector3& rhs);           // スカラー倍 k * V
Vector3 operator / (const Vector3& lhs, float rhs);           // スカラーで除算

#endif // !VECTOR3_H_
