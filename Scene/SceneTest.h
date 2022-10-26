#pragma once
#include "SceneBase.h"

#include "ObjectCircle.h"

class SceneTest : public SceneBase
{
public:
	SceneTest() 
	{
	}
	virtual ~SceneTest() {}


	virtual void init() override;
	virtual void end() override;

	virtual SceneBase* update() override;
	virtual void draw() override;

private:
	static const int kObjectNum = 4;
private:
	ObjectCircle	m_circle[kObjectNum];
};