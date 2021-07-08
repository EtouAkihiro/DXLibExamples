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
};

#endif // !GAME_H?
