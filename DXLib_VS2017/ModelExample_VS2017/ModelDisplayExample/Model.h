#ifndef MODEL_H_
#define MODEL_H_

#include "DxLib.h"

// モデルの読み込みクラス
class Model 
{
public:
	// 読み込み
	static void Load();
	// 描画
	static void Draw(int model, VECTOR position, VECTOR rotation, VECTOR scale);

public:
	// シンプルモデル
	static int SimpleModel;
};

#endif // !MODEL_H_
