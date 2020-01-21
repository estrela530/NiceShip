#include "GamePlay.h"
#include "GraphFactory.h"

//	‰Šú‰»
void GamePlay::Initialize()
{
	//	ƒQ[ƒ€‰æ–Ê‚Ì”wŒi‰æ‘œ“Ç‚İ‚İ
	_gameImage = GraphFactory::Instance().LoadGraph("img\\Sea.png");
	_player.Start();
	_port.Start();
	_largeA.Start();
	_largeB.Start();
	position = 0;
}

//	XV
void GamePlay::Update()
{
	//	ƒQ[ƒ€‰æ–Ê‚ğ•\¦‚·‚é
	DrawGraph(position, 0, _gameImage, FALSE);
	DrawGraph(position - 1980, 0, _gameImage, FALSE);
	if (position >= 1980)
	{
		position = 0;
	}

	//DrawExtendGraph(0, 0, 1980, 1280, _gameImage, FALSE);

	//XV
	_player.Update();
	_port.Update();
	_largeA.Update();
	_largeB.Update();

	//•`‰æ
	_player.Render();
	_port.Render();
	_largeA.Render();
	_largeB.Render();

	position += 10;
}

//	‰ğ•ú
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
