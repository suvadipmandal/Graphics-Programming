#include "stdafx.h"
#include <SFML\Graphics.hpp>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	while(window.isOpen())
	{
		window.clear();

		window.display();
	}
}
