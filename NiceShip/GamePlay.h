#pragma once
#include "Scene.h"
#include "Player.h"
#include "Port.h"
#include "LargeFish.h"
#include "MiddleFish.h"
#include "SmallFish.h"
#include "Special.h"

//�Q�[����ʃV�[��
class GamePlay :public Scene
{
public:
	//������
	void Initialize();

	//�X�V
	void Update();

	//���
	void Release();

private:
	//�v���C���[
	Player _player;

	//�`
	Port _port;

	//��A
	LargeFish _largeFish;

	//��B
	MiddleFish _middleFish;

	//��C
	SmallFish _smallFish;

	//���X�y�V����
	Special _special;

	//�Q�[���v���C�̔w�i
	int _gameImage;

	int position;

	int randomFish;
	int randomYPos;

	int Random[7];
	bool IsSummonFlag;
	int seconds;
};