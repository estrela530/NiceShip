#pragma once
#include "Scene.h"
#include "Player.h"
#include "Port.h"
#include "LargeA.h"
#include "LargeB.h"

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
	LargeA _largeA;

	//��B
	LargeB _largeB;

	//�Q�[���v���C�̔w�i
	int _gameImage;

	int position;

};