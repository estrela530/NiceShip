#include <DxLib.h>
#include "SmallA.h"
#include "GraphFactory.h"

//	‰Šú‰»ˆ—
void SmallA::Start()
{
	_grp = GraphFactory::Instance().LoadGraph("img\\fishC.png");
	_size = Vector2D(128, 128);
	_position = Vector2D(300, 735);
}

//	•`‰æ
void SmallA::Render()
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
			"img\\fishC.png", TRUE);
	}
}

//	XV
void SmallA::Update()
{
	_position.x += 2;

}

//	‰ğ•ú
void SmallA::Release()
{
}




