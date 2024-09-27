#include "util.h"

void titleDraw()
{
	int x = 20;
	int y = 5;
	system("mode con cols=110 lines=30 | title = test"); // 콘솔 크기 설정 및 타이틀
	gotoxy(x, y);
	cout<<"######   ######   ######   ##  ##   ######   ##  ##   ######"<<endl;
	gotoxy(x, y+1);
	cout << "######     ##     ###      ##  ##     ##     ### ##   ######" << endl;
	gotoxy(x, y+2);
	cout << "##         ##     ######   ######     ##     ######   ##" << endl;
	gotoxy(x, y+3);
	cout << "####       ##         ##   ######     ##     ## ###   ## ###" << endl;
	gotoxy(x, y+4);
	cout << "##       ######   ######   ##  ##   ######   ##  ##   ##  ##" << endl;
	gotoxy(x, y+5);
	cout << "##       ######   ######   ##  ##   ######   ##  ##   ######" << endl;
}

int keyControl()
{
	char temp = _getch();

	if (temp == 'w') return UP;
	else if (temp == 's') return DOWN;
	else if (temp == 'a') return LEFT;
	else if (temp == 'd') return RIGHT;
	else if (temp == ' ') return SUBMIT;
}

int menuDraw()
{
	int x = 35; //메뉴 x좌표
	int y = 15; //메뉴 y좌표
	gotoxy(x-2, y); //>표시를 위해 x-2
	cout << "> 게 임 시 작";
	gotoxy(x, y+1);
	cout << " 스 토 리";
	gotoxy(x, y+2);
	cout << "게 임 종 료";

	while (1)
	{
		int input = keyControl();
		switch (input)
		{
		case UP:
		{
			if (y > 15) //15~17이동
			{
				gotoxy(x - 2, y); //현재 자리 지움
				cout << ' ';
				gotoxy(x-2, --y); //위로 한칸 가서 >출력
				cout << ">";
			}
			break;
		}
		case DOWN:
		{
			if (y < 17) //15~17이동
			{
				gotoxy(x - 2, y);
				cout << ' ';
				gotoxy(x-2, ++y);
				cout << '>';
			}
			break;
		}
		case SUBMIT:
		{
			return y - 15; //게임시작이면 12-12 해서 0, 스토리면 13-12 해서 1, 게임 종료는 14-12 해서 2 //0,1,2
		}
		}
	}

	return 0;
}

void gotoxy(int x, int y)
{
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(consoleHandle, pos);
}
