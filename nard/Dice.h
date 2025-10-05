#pragma once
#include <SFML/Graphics.hpp>

class Dice
{
	sf::RectangleShape rectangle;
	std::vector<sf::CircleShape> circles;
	bool active = true;                   // переменная определяющая по кубику был сделан ход или нет
public:
	explicit Dice(int number);
	void render(sf::RenderWindow& window);
	void setPosition(int offset);
	void setPositionForComp(int offset);
	int getCircles();
	bool getСondition();
	void noMove();
	void off();
};

