#include "DxLib.h"
#include "Game.h"
#include "Model.h"

// �J�n
void Game::Start()
{
	Model::Load();
}

// �X�V
void Game::Update()
{
}

// �`��
void Game::Draw()
{
	Model::Draw(Model::SimpleModel, VGet(0.0f, 0.0f, 0.0f), VGet(0.0f, 0.0f, 0.0f), VGet(1.0f, 1.0f, 1.0f));
}

// �I��
void Game::End()
{
}
