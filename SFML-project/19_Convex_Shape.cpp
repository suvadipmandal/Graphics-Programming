
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	sf::ConvexShape shape(6);

	//shape.setPointCount(6);

	shape.setPoint(0, sf::Vector2f(40, 70));
	shape.setPoint(1, sf::Vector2f(60, 70));
	shape.setPoint(2, sf::Vector2f(200, 200));
	shape.setPoint(3, sf::Vector2f(350, 300));
	shape.setPoint(4, sf::Vector2f(300, 450));
	shape.setPoint(5, sf::Vector2f(320, 500));

	while(window.isOpen())
	{
		sf::Event event;
		while( window.pollEvent(event))
		{
			switch( event.type )
			{
			case sf::Event::Closed:
					window.close( );
					break;
            }
		window.clear();
		window.draw(shape);
		window.display();
		}


	}
}