#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<Windows.h>
#include<vector>
#include<conio.h>
using namespace std;

//��ũ�� ����

//Ű���� ��
#ifndef KEY_CODE
#define KEY_CODE

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

#endif

//�Լ� ����
void titleDraw(); //Ÿ��Ʋ �����ֱ�
int keyControl(); //Ű �Է� ��
int menuDraw(); //�޴� �����ֱ�
void gotoxy(int x, int y); //���ϴ� ��ǥ �̵�


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
//            while (getline(readFile, str)) // eof ��� getline���� ó��
//            {
//                cout << str << endl; // �� ���
//            }
//
//            readFile.close(); // ���� �ݱ�
//            Sleep(500);
//            system("cls");
//        }
//        else
//        {
//            cout << "������ �� �� �����ϴ�." << endl; // ������ �� �� ���� ����� ���� ó��
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
//    system("mode con cols=110 lines=30 test"); // �ܼ� ũ�� ���� �� Ÿ��Ʋ
//    system("cls"); // ȭ�� �����
//
//    string deadFish = "./fish1/getFish.txt";
//    string fishAni = "./fish1/fish1_ani(1).txt";
//    string fishAni2 = "./fish1/fish1_ani(2).txt";
//
//    //����� 1 �ִϸ��̼�
//    vector<string> fish1;
//    fish1.push_back(fishAni);
//    fish1.push_back(fishAni2);
//    //����� ��� ���� �ִϸ��̼�
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
