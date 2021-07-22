#include "Model.h"

#include "DxLib.h"
#include "DXTransform.h"


// シンプルモデル
int Model::SimpleModel{ -1 };

// モデルの読み込み
void Model::Load()
{
	SimpleModel = MV1LoadModel("Models/Robot Kyle.mv1");
}

// 描画（Vector版）
void Model::Draw(int model, VECTOR position, VECTOR rotation, VECTOR scale)
{
	// モデルの座標を設定
	MV1SetPosition(model,position);
	// モデルの回転を設定
	MV1SetRotationXYZ(model, rotation);
	// モデルの大きさを設定
	MV1SetScale(model, scale);
	// 描画
	MV1DrawModel(model);
}

// 描画（Transform版）
void Model::Draw(int model, DXTransform transform)
{
	// モデルの座標を設定
	MV1SetPosition(model, transform.Position());
	// モデルの回転を設定
	MV1SetRotationXYZ(model, transform.Rotation());
	// モデルの大きさ
	MV1SetScale(model, transform.Scale());
	// 描画
	MV1DrawModel(model);
}
