#pragma once
#include "Scene.h"
#include "Player.h"
#include "Port.h"
#include "LargeFish.h"
#include "MiddleFish.h"
#include "SmallFish.h"
#include "Special.h"

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
	LargeFish _largeFish;

	//魚B
	MiddleFish _middleFish;

	//魚C
	SmallFish _smallFish;

	//魚スペシャル
	Special _special;

	//ゲームプレイの背景
	int _gameImage;

	int position;

	int randomFish;
	int randomYPos;

	int Random[7];
	bool IsSummonFlag;
	int seconds;
};