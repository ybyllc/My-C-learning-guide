#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include <conio.h>

#define MIND_LINE 15		//文字居中打印的行数
#define MIND_SPACE 40		//文字居中打印的列数
#define MAX_LINE   30		//界面的最大显示行数
#define MAX_SCORE  5		//最大分数
#define MAX_LEVEL  10		//最大等级

int SCORE = 0;				//起始分数
int LEVEL = 1;				//起始等级
int SLEEPTIME = 500;		//起始等待时间


//打印换行
void PrintEnter(int Line);
//打印空格
void PrintSpace(int Space);

//打印开始欢迎界面
void WelcomeMenu(char *Str);
//设置游戏界面标题
void GameTitle();

//游戏开始
void GameStart();
//游戏结束
void GameOver(bool Ret);
//游戏暂停
void GamePause();

//显示字母
void ShowaLphabet();	
//游戏控制
bool isCheckTrue(char iLphabet);

//判断是否超过最大行数
bool isOverStep(int Index);
//判断是否最大分数
bool isMaxScore(int Score);
//判断是否最大等级
bool isMaxLevel(int Level);


void PrintEnter(int Line)
{
	for (int i = 0; i < Line; i++)
	{
		printf("\n");
	}
}

void PrintSpace(int Space)
{
	for (int i = 0; i < Space; i++)
	{
		printf(" ");
	}
}

void WelcomeMenu(char *Str)
{
	PrintEnter(MIND_LINE);
	PrintSpace(MIND_SPACE);
	printf("%s\n", Str);
	getchar();
}

void GameStart()
{
	GameTitle();
	ShowaLphabet();
}

void GamePause()
{
	system("cls");
	PrintEnter(MIND_LINE);
	PrintSpace(MIND_SPACE);
	printf("Game Pause, Press 1 to Continue!");
	while (_getch() != '1');
	system("cls");
}

void GameTitle()
{
	system("cls");
	PrintSpace(12);
	printf("Leves[%d]", LEVEL);
	PrintSpace(50);
	printf("Score[%d]\n", SCORE);
	PrintSpace(12);
	printf("Press 1 to Prase");
	PrintSpace(40);
	printf("Press 2 to Exit\n");
	for (int i = 0; i < 90; i++)
	{
		printf("_");
	}
	printf("\n");
}

void GameOver(bool Ret)
{
	system("cls");
	if (Ret)
	{
		PrintEnter(MIND_LINE);
		PrintSpace(MIND_SPACE);
		printf("Congratulations,You are across the game!!!");
	}
	else
	{
		PrintEnter(MIND_LINE);
		PrintSpace(MIND_SPACE);
		printf("You are failed ths game!!!");
	}
	getchar();
	exit(0);
}

void ShowaLphabet()
{
	srand((unsigned)time(NULL));
	char iLphabet = 'A' + rand() % 26;
	int iSpace = rand() % 70;
	int LineIndex = 0;
	while (true)
	{
		LineIndex++;
		PrintSpace(iSpace);
		printf("%c",iLphabet);
		Sleep(SLEEPTIME);
		printf("\b \n");		/*通过退格和空格消除字母*/
		if (isOverStep(LineIndex))
		{
			LineIndex = 0;
			SCORE--;
			break;
		}
		if(isCheckTrue(iLphabet))
		{
			SCORE++;
			if (isMaxScore(SCORE))
			{
				SCORE = 0;
				SLEEPTIME -= 10;
				LEVEL++;
				if (isMaxLevel(LEVEL))
				{
					GameOver(true);
				}
			}
			break;
		}
		if (SCORE < -10)
		{
			GameOver(false);
		}
	}
}

bool isOverStep(int Index)
{
	bool Ret = false;
	if (Index > MAX_LINE)
	{
		Ret = true;
	}
	return Ret;
}

bool isCheckTrue(char iLphabet)
{
	bool Ret = false;
	if (_kbhit())
	{
		char ch = _getch();
		if (ch == iLphabet)
		{
			Ret = true;
		}
		else if(ch == '1')
		{
			GamePause();
		}
		else if (ch == '2')
		{
			GameOver(false);
		}
		else
		{
			SCORE--;
		}
	}
	return Ret;
}

bool isMaxScore(int Score)
{
	bool Ret = false;
	if (Score > MAX_SCORE)
	{
		Ret = true;
	}
	return Ret;
}

bool isMaxLevel(int Level)
{
	bool Ret = false;
	if (Level > MAX_LEVEL)
	{
		Ret = true;
	}
	return Ret;
}

int main(void)
{
	WelcomeMenu("Press AnyKey to Start the Game!\n");
	while (true)
	{
		GameStart();
	}
	getchar();
	return 0;
}