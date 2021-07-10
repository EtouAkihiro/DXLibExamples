#ifndef GAME_OBJECT_H_
#define GAME_OBJECT_H_

#include <string>

#include "Vector3.h"

// ゲームオブジェクトクラス（基底クラス）
class GameObject
{
public:
	// コンストラクタ
	GameObject() = default;
	// デストラクタ
	virtual ~GameObject() = default;

	// 更新
	virtual void Update();
	// 描画
	virtual void Draw();

	// 死亡する
	void Die();
	// 死亡しているか？
	bool IsDead() const;
	// タグ名を取得
	const std::string& Tag() const;
	// 名前を取得
	const std::string& Name() const;

	// コピー禁止
	GameObject(const GameObject& other) = delete;
	GameObject& operator = (const GameObject& other) = delete;

protected:
	// タグ名
	std::string m_Tag;
	// 名前
	std::string m_Name;
	// 位置
	Vector3 m_Position;
	// 死亡フラグ
	bool m_Dead{ false };
};

#endif // !GAME_OBJECT_H_
