
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	sf::CircleShape circle(36);
	circle.setRadius(200);
	circle.setPointCount(300);
	//circle.setFillColor(sf::Color::Cyan);
	circle.setFillColor(sf::Color(233,223,145));
	circle.setOutlineThickness(-5);
	circle.setOutlineColor(sf::Color::Green);
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
		window.draw(circle);
		window.display();
		}


	}
}