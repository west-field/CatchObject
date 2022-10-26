#include "DxLib.h"
#include "game.h"
#include "SceneTest.h"


namespace
{
}

void SceneTest::init()
{
	int index = 0;
	int color = 255;
	for (auto& obj : m_circle)
	{
		Vec2 pos{256.0f - index * 32.0f, 256.0f - index * 32.0f };

		obj.init();
		obj.setSceneTest(this);
		obj.setPos(pos);
		obj.setColor(GetColor(color,color,color));
		index++;
		color -= 16;
		if (color < 32)	color = 32;
	}
}

void SceneTest::end()
{
}

SceneBase* SceneTest::update()
{
	for (auto& obj : m_circle)
	{
		obj.update();
	}
	return this;
}

void SceneTest::draw()
{
	for (auto& obj : m_circle)
	{
		obj.draw();
	}
}

