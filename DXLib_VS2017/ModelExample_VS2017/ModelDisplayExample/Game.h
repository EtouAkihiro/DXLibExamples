#ifndef GAME_H_
#define GAME_H_

class Game 
{
public:
	// コンストラクタ
	Game() = default;
	// デストラクタ
	~Game() = default;

	// 初期化
	void Init();
	// 更新
	void Update();
	// 描画
	void Draw();
	// 終了
	void End();
};

#endif // !GAME_H?
