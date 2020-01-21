#pragma once
#include "Scene.h"
#include "Player.h"
#include "Port.h"
#include "LargeA.h"
#include "LargeB.h"

//ゲーム画面シーン
class GamePlay :public Scene
{
public:
	//初期化
	void Initialize();

	//更新
	void Update();

	//解放
	void Release();

private:
	//プレイヤー
	Player _player;

	//港
	Port _port;

	//魚A
	LargeA _largeA;

	//魚B
	LargeB _largeB;

	//ゲームプレイの背景
	int _gameImage;

	int position;

};