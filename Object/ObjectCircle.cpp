#include "ObjectCircle.h"
#include "game.h"
#include "DxLib.h"
#include "SceneTest.h"
#include "Mouse.h"

namespace
{
	// サイズ
	constexpr int kRadius = 64;
}

ObjectCircle::ObjectCircle() :
	m_pSceneTest(nullptr),
	m_color(GetColor(255, 255, 255))
{
}
ObjectCircle::~ObjectCircle()
{

}

void ObjectCircle::init()
{
	m_color = GetColor(255, 255, 255);
	m_isExist = true;
}

void ObjectCircle::end()
{

}

void ObjectCircle::update()
{
	// 移動	マウスでつかんで移動させる
	Vec2 mousePos = Mouse::getPos();
	
}

void ObjectCircle::draw()
{
	DrawCircle(static_cast<int>(m_pos.x), static_cast<int>(m_pos.y), kRadius, m_color);

	// 当たり判定表示
//	DrawBoxAA(m_pos.x, m_pos.y, m_pos.x + m_colSize.x, m_pos.y + m_colSize.y, kColor, false);
}
