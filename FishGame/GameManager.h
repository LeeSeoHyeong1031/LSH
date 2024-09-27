#pragma once
#include "Player.h"
#include "Fish.h"

class GameManager
{
public:
	static GameManager& GetInstance();

	GameManager(const GameManager&) = delete;
	void operator=(const GameManager&) = delete;

public:
	void combat();
	void Init();

protected:
	GameManager() {}
	~GameManager() {}
};
