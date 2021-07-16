#include "DxLib.h"
#include "Game.h"
#include "Model.h"

// 開始
void Game::Start()
{
	Model::Load();
}

// 更新
void Game::Update()
{
}

// 描画
void Game::Draw()
{
	Model::Draw(Model::SimpleModel, VGet(0.0f, 0.0f, 0.0f), VGet(0.0f, 0.0f, 0.0f), VGet(1.0f, 1.0f, 1.0f));
}

// 終了
void Game::End()
{
}
