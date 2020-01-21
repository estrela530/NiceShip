#include <DxLib.h>
#include "LargeFish.h"
#include "GraphFactory.h"

//	‰Šú‰»ˆ—
void LargeFish::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishA.png");
	_size = Vector2D(600, 128);
	_position = Vector2D(100, 735);
	_velocity = Vector2D(10, 0);
}

//	•`‰æ
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

//	XV
void LargeFish::Update()
{

	_position.x += 2;


}

void LargeFish::Hit()
{

}

//	‰ğ•ú
void LargeFish::Release()
{
}




