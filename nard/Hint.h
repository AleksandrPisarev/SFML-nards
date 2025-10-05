#pragma once
#include <SFML/Graphics.hpp>
class Hint
{
	sf::CircleShape circle;
	std::vector<int> indexDice;   // массив хранит идексы кубиков с помощью которых была создана подсказка 
public:
	Hint();
	void setPosition(sf::Vector2f position);
	void render(sf::RenderWindow& window);
	sf::Vector2f getPosition();
	std::vector<int>& getIndexDice();
};

