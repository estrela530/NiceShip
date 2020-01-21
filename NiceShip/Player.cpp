#include <DxLib.h>
#include "Player.h"
#include "GraphFactory.h"
#include <cmath>
#include"LargeFish.h"

//	初期化処理
void Player::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\PlayerShip.png");
	_size = Vector2D(64, 64);
	_radius = 16;
	_position = Vector2D(500, 500);
	_velocity = Vector2D(0, 0);
	_rotate = 0;
	_speed = 2;
	_angle = Vector2D(0, 0);
	_sin = 0;
	_cos = 0;
	playerPos.x = 100;
	playerPos.y = 100;
	_vec.x = 0; 
	_vec.y = 0; 

	playerHei = 64;  //プレイヤーの横幅
	playerWid = 128; //プレイヤーの縦幅

	
}


//	更新
void Player::Update()
{
	//	キー入力を更新
	int key = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	//static int inputFrame = 0;
	VECTOR MoveAngle;
	//VECTOR speed1;
	_sin = sin(_rotate);
	_cos = cos(_rotate);

	MoveAngle.x = _vec.x * _cos - _vec.y * _sin;
	MoveAngle.y = _vec.x * _sin + _vec.y * _cos;

	/*MoveAngle.x = _velocity.x * _cos - _velocity.y * _sin;
	MoveAngle.y = _velocity.x * _sin + _velocity.y * _cos;*/


	playerPos = VGet(playerPos.x, playerPos.y, 0);
	//	移動量をクリア	
	_velocity = Vector2D(0, 0);

	//	右キーで右に移動
	if (key & PAD_INPUT_RIGHT)
	{
		//_velocity.x += 2;
		_rotate += 0.02;
	}

	//	左キーで右に移動
	if (key & PAD_INPUT_LEFT)
	{
		_rotate -= 0.02;
	}

	//スペースキーが押されたら前進
	if (CheckHitKey(KEY_INPUT_SPACE))
	{
		//_velocity.y -= 2;
		_vec.x += 0.2;
		if (_vec.x >= 5)
		{
			_vec.x = 5;
		}
	}
	else if (CheckHitKey(KEY_INPUT_SPACE) == FALSE)
	{
		_vec.x -= 0.1;
		if (_vec.x <= 0)
		{
			_vec.x = 0;
		}
	}


	playerPos = VAdd(playerPos, MoveAngle);
	_pos = playerPos;
	//_position += _velocity;
}

//	解放
void Player::Release()
{
}

void Player::Hit()
{
	auto x = abs((_pos.x + playerWid / 2) - ( + playerWid / 2));
	auto y = abs((+ playerHei / 2) - ( _position.y+ playerHei / 2));

	if (x < (playerWid + playerWid) / 2 && y < (playerHei + playerHei) / 2)
	{
		DrawString(0, 0, "当たった!", GetColor(255, 0, 0));
	}
}


//	描画
void Player::Render()
{
	//	プレイヤーを描画
	/*DrawRectGraph(static_cast<int>(_position.x),
		static_cast<int>(_position.y), 0, 64,
		static_cast<int>(_size.x),
		static_cast<int>(_size.y), _grp, TRUE);*/

		/*LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\red.png", FALSE);*/

			//途中
	DrawRotaGraph
	(
		static_cast<int>(_pos.x),
		static_cast<int>(_pos.y),
		0.5,
		_rotate,
		_grp,
		TRUE,
		FALSE
	);


	/*DrawRotaGraph
	(
		static_cast<int>(_position.x),
		static_cast<int>(_position.y),
		1,
		_rotate,
		_grp,
		FALSE,
		FALSE
	);*/
}


