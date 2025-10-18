#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
#include<vector>
#include<Windows.h>
#include "Chip.h"
#include "Dice.h"
#include "Hint.h"
class Game
{
	sf::RenderWindow window;
	sf::Texture bgTextur, buttonTextur;
	sf::Sprite bgSprite, buttonSprite;
	std::vector<Chip> field[24];
	std::vector<Dice> dice;           // ������ ������ �������
	std::vector<Hint> hints;          // ������ ������� �������������� ��������� ����
	bool playingSide = true;          // ���������� ������������ ��� ��������� ��� ����� ��� ���������
	bool rollDice = false;            // ���������� ������������ ������� �� ������ ����� ��� ������� � ������� ��� �������� playingSide
	int endMove = 0;                  // ���������� ������������ �� �������� ������� �������� ��������
	sf::Event event;
public:
	Game();
	void run();
private:
	void processEvent();
	void update();
	void render();
	void startPosition();
	void movingChips();                                            // ������� ����������� �����
	void movingComp();                                             // ������� ����������� ����� ����������
	void rollOfDice();                                             // ������� ������ �������
	void playerToGo();                                             // ������� ��� ������
	void computerToGo();                                           // ������� ��� ����������
	void changingPositionsChips(int, int);                         // ������� ��������� ������� ����� ������� ��� ���������� ���� � �������� ���� ����������
	bool possibilityOfMove(bool);                                  // ������� ��������� ���� �� ������� ����
};