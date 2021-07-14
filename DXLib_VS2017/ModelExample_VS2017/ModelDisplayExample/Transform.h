#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include <list>

#include "DxLib.h"

// トランスフォームクラス
class Transform
{
public:
	// デフォルトコンストラクタ
	Transform() = default;
	// デストラクタ
	~Transform();

	// ワールド座標を設定
	void Position(VECTOR position);
	// ワールド座標を取得
	VECTOR Position() const;

	// ローカル座標を設定
	void LocalPosition(VECTOR localPosition);
	// ローカル座標を取得
	VECTOR LocalPosition() const;

	// ワールドの回転を設定
	void Rotation(VECTOR rotation);
	// ワールドの回転を取得
	VECTOR Rotation() const;

	// ローカルの回転を設定
	void LocalRotation(VECTOR localRotation);
	// ローカルの回転を取得
	VECTOR LocalRotation() const;

	// ワールドのスケール値を設定
	void Scale(VECTOR scale);
	// ワールドのスケール値を取得
	VECTOR Scale() const;

	// ローカルのスケール値を設定
	void LocalScale(VECTOR localScale);
	// ローカルのスケール値を取得
	VECTOR LocalScale() const;

	// 前向き方向を設定
	void Forward(VECTOR forward);
	// 前向き方向を取得
	VECTOR Forward() const;

	// 右向き方向を設定
	void Right(VECTOR right);
	// 右向き方向を取得
	VECTOR Right() const;

	// 上向き方向を設定
	void Up(VECTOR up);
	// 上向き方向を取得
	VECTOR Up() const;

	
	void LookAt(Transform target, VECTOR worldUp);
	void LookAt(Transform target);
	void LookAt(VECTOR worldPosition, VECTOR worldUp);
	void LookAt(VECTOR worldPosition);

	// 親の設定
	void SetParent(Transform* parent, bool world_position_stays);
	// 親を削除
	void detachParent();

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

	// 親クラス
	Transform* parent = nullptr;

	// 子クラス
	std::list<Transform*> childs;
};

#endif // !TRANSFORM_H?
