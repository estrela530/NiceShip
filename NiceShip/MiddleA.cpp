#include <DxLib.h>
#include "MiddleA.h"
#include "GraphFactory.h"

//	‰Šú‰»ˆ—
void MiddleA::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishB.png");
	_size = Vector2D(128, 128);
	_position = Vector2D(300, 735);
}

//	•`‰æ
void MiddleA::Render()
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
			"img\\fishB.png", TRUE);
	}
}

//	XV
void MiddleA::Update()
{
	_position.x += 2;

}

//	‰ğ•ú
void MiddleA::Release()
{
}




