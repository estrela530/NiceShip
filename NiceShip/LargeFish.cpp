#include <DxLib.h>
#include "LargeFish.h"
#include "GraphFactory.h"

//	初期化処理
void LargeFish::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishA.png");
	_size = Vector2D(128, 128);
	_position = Vector2D(100, 735);
	_velocity = Vector2D(10, 0);
}

//	描画
void LargeFish::Render()
{
	if (_position.x < 500)
	{
		LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\silhouette.png", TRUE);
	}
	else if (_position.x >= 500)
	{
		LoadGraphScreen(static_cast<int>(_position.x),
			static_cast<int>(_position.y),
			"img\\fishA.png", TRUE);

	}

}

//	更新
void LargeFish::Update()
{

	_position.x += 2;


}

void LargeFish::Hit()
{

}

//	解放
void LargeFish::Release()
{
}




