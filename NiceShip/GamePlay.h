#pragma once
#include "Scene.h"
#include "Player.h"
#include "Port.h"
#include "LargeFish.h"
#include "MiddleFish.h"
#include "SmallFish.h"

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

	//�Q�[���v���C�̔w�i
	int _gameImage;

	int position;

	int Random[8];
	 

};