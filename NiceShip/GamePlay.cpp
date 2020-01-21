#include "GamePlay.h"
#include "GraphFactory.h"
#include "DxLib.h"
#include <stdio.h>

//	‰Šú‰»
void GamePlay::Initialize()
{
	//	ƒQ[ƒ€‰æ–Ê‚Ì”wŒi‰æ‘œ“Ç‚Ýž‚Ý
	_gameImage = GraphFactory::Instance().LoadGraph("img\\Sea.png");
	_player.Start();
	_port.Start();
	//_largeFish.Start();
	_middleFish.Start();
	_smallFish.Start();
	_special.Start();
	position = 0;
	seconds = 0;
	IsSummonFlag = false;
}

//	XV
void GamePlay::Update()
{
	//	ƒQ[ƒ€‰æ–Ê‚ð•\Ž¦‚·‚é
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

	//•`‰æ
	_player.Render();
	_port.Render();


#pragma region ‹›ƒ‰ƒ“ƒ_ƒ€¶¬

	seconds += 1;

	if (seconds >= 60)
	{
		//randomFish = GetRand(7);
		randomFish = 1;
		IsSummonFlag = true;
	}

	printf("%d\n", seconds);

	if (IsSummonFlag)
	{
		switch (randomFish)
		{
		case 1:
			//randomYPos = GetRand(7);
			randomYPos = 1;
			if (randomYPos == 1)
			{
				LargeFish _largeFish;
				_largeFish.Start();
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Render();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 2)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 3)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 4)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 5)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 6)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 7)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			break;

		case 2:
			randomYPos = GetRand(7);

			if (randomYPos == 1)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				randomYPos = 0;
				IsSummonFlag = false;
			}
			else if (randomYPos == 2)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 3)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 4)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 5)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 6)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 7)
			{
				_largeFish._position.y = randomYPos * 100;
				_largeFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			break;

		case 3:
			randomYPos = GetRand(7);

			if (randomYPos == 1)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 2)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 3)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 4)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 5)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 6)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 7)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			break;

		case 4:
			randomYPos = GetRand(7);

			if (randomYPos == 1)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 2)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 3)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 4)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 5)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 6)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 7)
			{
				_middleFish._position.y = randomYPos * 100;
				_middleFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			break;

		case 5:
			randomYPos = GetRand(7);

			if (randomYPos == 1)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 2)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 3)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 4)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 5)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 6)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 7)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			break;

		case 6:
			randomYPos = GetRand(7);

			if (randomYPos == 1)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 2)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 3)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 4)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 5)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 6)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 7)
			{
				_smallFish._position.y = randomYPos * 100;
				_smallFish.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			break;

		case 7:
			randomYPos = GetRand(7);

			if (randomYPos == 1)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 2)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 3)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 4)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 5)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 6)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}
			else if (randomYPos == 7)
			{
				_special._position.y = randomYPos * 100;
				_special.Start();
				seconds = 0;
				IsSummonFlag = false;
				randomYPos = 0;
			}

			break;
		}
	}
#pragma endregion

	_largeFish.Update();
	_middleFish.Update();
	_smallFish.Update();
	_special.Update();


	_largeFish.Render();
	_middleFish.Render();
	_smallFish.Render();
	_special.Render();

	_player.Hit();

	position += 3;
}

//	‰ð•ú
void GamePlay::Release()
{
	GraphFactory::Instance().EraseGraph("img\\Sea.png");
}
