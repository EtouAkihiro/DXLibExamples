#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include "DxLib.h"

// トランスフォームクラス
class Transform
{
private:
	enum 
	{
		Local,  // ローカル
		world,  // ワールド
	};

public:
	// デフォルトコンストラクタ
	Transform() = default;
	// デストラクタ
	~Transform();

	// ワールド座標を設定
	void SetPosition(VECTOR position);
	// ワールド座標を取得
	VECTOR GetPosition() const;
	// ローカル座標を設定
	void SetLocalPosition(VECTOR localPosition);
	// ローカル座標を取得
	VECTOR GetLocalPosition() const;
	// ワールドの回転を設定
	void SetRotation(VECTOR rotation);
	// ワールドの回転を取得
	VECTOR GetRotation() const;
	// ローカルの回転を設定
	void SetLocalRotation(VECTOR localRotation);
	// ローカルの回転を取得
	VECTOR GetLocalRotation() const;
	// ワールドのスケール値を設定
	void SetScale(VECTOR scale);
	// ワールドのスケール値を取得
	VECTOR GetScale() const;
	// ローカルのスケール値を設定
	void SetLocalScale(VECTOR localScale);
	// ローカルのスケール値を取得
	VECTOR GetLocalScale() const;

private:
	// 座標(ワールド座標)
	VECTOR position{ 0.0f,0.0f,0.0f };
	// 回転(ワールド座標)
	VECTOR rotation{ 0.0f,0.0f,0.0f };
	// スケール値(ワールド座標)
	VECTOR scale{ 0.0f,0.0f,0.0f };
	// 座標(ローカル座標)
	VECTOR local_position{ 0.0f,0.0f,0.0f };
	// 回転(ローカル座標)
	VECTOR local_rotation{ 0.0f,0.0,0.0f };
	// スケール値(ローカル座標)
	VECTOR local_scale{ 0.0f,0.0f,0.0f };
};

#endif // !TRANSFORM_H?
