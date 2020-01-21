#include "GamePlay.h"
#include "GraphFactory.h"

//	‰Šú‰»
void GamePlay::Initialize()
{
	//	ƒQ[ƒ€‰æ–Ê‚Ì”wŒi‰æ‘œ“Ç‚İ‚İ
	_gameImage = GraphFactory::Instance().LoadGraph("img\\Sea.png");
	_player.Start();
	_port.Start();
	_largeFish.Start();
	_middleFish.Start();
	_smallFish.Start();
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
	_largeFish.Update();
	_middleFish.Update();
	_smallFish.Update();

	//•`‰æ
	_player.Render();
	_port.Render();
	_largeFish.Render();
	_middleFish.Render();
	_smallFish.Render();

	position += 2;
}

//	‰ğ•ú
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
