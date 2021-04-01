#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <stdbool.h>
#include <time.h>
#include <conio.h>

#define MIND_LINE 15		//���־��д�ӡ������
#define MIND_SPACE 40		//���־��д�ӡ������
#define MAX_LINE   30		//����������ʾ����
#define MAX_SCORE  5		//������
#define MAX_LEVEL  10		//���ȼ�

int SCORE = 0;				//��ʼ����
int LEVEL = 1;				//��ʼ�ȼ�
int SLEEPTIME = 500;		//��ʼ�ȴ�ʱ��


//��ӡ����
void PrintEnter(int Line);
//��ӡ�ո�
void PrintSpace(int Space);

//��ӡ��ʼ��ӭ����
void WelcomeMenu(char *Str);
//������Ϸ�������
void GameTitle();

//��Ϸ��ʼ
void GameStart();
//��Ϸ����
void GameOver(bool Ret);
//��Ϸ��ͣ
void GamePause();

//��ʾ��ĸ
void ShowaLphabet();	
//��Ϸ����
bool isCheckTrue(char iLphabet);

//�ж��Ƿ񳬹��������
bool isOverStep(int Index);
//�ж��Ƿ�������
bool isMaxScore(int Score);
//�ж��Ƿ����ȼ�
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
		printf("\b \n");		/*ͨ���˸�Ϳո�������ĸ*/
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