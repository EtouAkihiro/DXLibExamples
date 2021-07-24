#ifndef MODEL_H_
#define MODEL_H_

#include "DxLib.h"

class DXTransform;

// モデルの読み込みクラス
class Model 
{
public:
	// 読み込み
	static void Load();
	// 描画（Vector版）
	static void Draw(int& model, VECTOR& position, VECTOR& rotation, VECTOR& scale);
	// 描画（Transform版）
	static void Draw(int& model, DXTransform& transform);

public:
	// シンプルモデル
	static int SimpleModel;
};

#endif // !MODEL_H_
