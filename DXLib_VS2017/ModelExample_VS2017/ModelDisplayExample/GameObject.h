#ifndef GAME_OBJECT_H_
#define GAME_OBJECT_H_

// ゲームオブジェクトクラス（基底クラス）
class GameObject
{
	// コンストラクタ
	GameObject() = default;
	// デストラクタ
	virtual ~GameObject() = default;

	// 更新
	virtual void Update();
	// 描画
	virtual void Draw();
};

#endif // !GAME_OBJECT_H_
