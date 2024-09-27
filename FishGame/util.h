#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include<vector>
#include<conio.h>
using namespace std;

//매크로 정의

//키보드 값
#ifndef KEY_CODE
#define KEY_CODE

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

#endif

//함수 정의
void titleDraw(); //타이틀 보여주기
int keyControl(); //키 입력 값
int menuDraw(); //메뉴 보여주기
void gotoxy(int x, int y); //원하는 좌표 이동


//void Show(ifstream& readFile, vector<string> vector)
//{
//    string str;
//    for (int i = 0; i < vector.size(); i++)
//    {
//        str = vector[i];
//        readFile.open(str);
//        if (readFile.is_open())
//        {
//            int i = 0;
//            while (getline(readFile, str)) // eof 대신 getline으로 처리
//            {
//                cout << str << endl; // 줄 출력
//            }
//
//            readFile.close(); // 파일 닫기
//            Sleep(500);
//            system("cls");
//        }
//        else
//        {
//            cout << "파일을 열 수 없습니다." << endl; // 파일을 열 수 없는 경우의 오류 처리
//        }
//    }
//}
//
//void gotoxy(int x, int y)
//{
//    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
//    COORD pos;
//    pos.X = x;
//    pos.Y = y;
//    SetConsoleCursorPosition(consoleHandle, pos);
//}
//
//int main()
//{
//    system("mode con cols=110 lines=30 test"); // 콘솔 크기 설정 및 타이틀
//    system("cls"); // 화면 지우기
//
//    string deadFish = "./fish1/getFish.txt";
//    string fishAni = "./fish1/fish1_ani(1).txt";
//    string fishAni2 = "./fish1/fish1_ani(2).txt";
//
//    //물고기 1 애니메이션
//    vector<string> fish1;
//    fish1.push_back(fishAni);
//    fish1.push_back(fishAni2);
//    //물고기 잡기 성공 애니메이션
//    vector<string> fishSuccess;
//    fishSuccess.push_back(deadFish);
//
//    ifstream readFile;
//    //Show(readFile, fishSuccess);
//    //while(true)
//    //{
//    //    Show(readFile, fish1);
//    //}
//    for (int i = 0; i < 30; i++)
//    {
//        for (int k = 0; k < 110; k++)
//        {
//            if (board[i][k] == 0) cout << '0';
//        }
//        cout << endl;
//    }
//
//}
//
