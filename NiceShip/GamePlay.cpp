#include "GamePlay.h"
#include "GraphFactory.h"

//	������
void GamePlay::Initialize()
{
	//	�Q�[����ʂ̔w�i�摜�ǂݍ���
	_gameImage = GraphFactory::Instance().LoadGraph("img\\Sea.png");
	_player.Start();
	_port.Start();
	_largeA.Start();
	_largeB.Start();
	position = 0;
}

//	�X�V
void GamePlay::Update()
{
	//	�Q�[����ʂ�\������
	DrawGraph(position, 0, _gameImage, FALSE);
	DrawGraph(position - 1980, 0, _gameImage, FALSE);
	if (position >= 1980)
	{
		position = 0;
	}

	//DrawExtendGraph(0, 0, 1980, 1280, _gameImage, FALSE);

	//�X�V
	_player.Update();
	_port.Update();
	_largeA.Update();
	_largeB.Update();

	//�`��
	_player.Render();
	_port.Render();
	_largeA.Render();
	_largeB.Render();

	position += 10;
}

//	���
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
