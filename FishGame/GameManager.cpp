#include"GameManager.h"

Unit player = Player("길잡이");
Fish fish1 = Fish("민물고기");
Fish fish2 = Fish("멸치");
Fish shark = Fish("백상아리");
vector<Fish> fishes;


GameManager& GameManager::GetInstance()
{
	static GameManager inst;
	return inst;
}

void GameManager::combat()
{
	srand(time(NULL));
	int random = rand() % fishes.size(); // 0~2
	player.ShowStat(10,2);
	fishes[random].ShowStat(30,2);
	cout << "=====플레이어가 공격 후=====" << endl;
	fishes[random].takeDamage(player.getAttack());
	fishes[random].ShowStat(30,8);
	cout << "=====적이 공격 후=====" << endl;
	player.takeDamage(fishes[random].getAttack());
	player.ShowStat(10, 8);
	Sleep(5000);
}

void GameManager::Init()
{
	fishes.push_back(fish1);
	fishes.push_back(fish2);
	fishes.push_back(shark);
	for (int i = 0; i < fishes.size(); i++)
	{
		if (fishes[i].getName() == "민물고기")
		{
		fishes[i].SetUP(1,20,5, 10);
		}
		else if (fishes[i].getName() == "멸치")
		{
			fishes[i].SetUP(1, 5, 2, 5);
		}
		else if (fishes[i].getName() == "백상아리")
		{
			fishes[i].SetUP(50, 300, 75, 100);
		}
	}
}
