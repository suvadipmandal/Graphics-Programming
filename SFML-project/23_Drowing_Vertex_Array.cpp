
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	sf::Vertex point;

	point.position = sf::Vector2f(200,300);
	point.color = sf::Color::Red;

	sf::VertexArray line( sf::Lines, 2);

	line[0].position = sf::Vector2f(200, 150);
	line[0].color = sf::Color::Red;

	line[1].position = sf::Vector2f(400, 50);
	line[1].color = sf::Color::White;

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
		window.draw(line);
		window.display();
		}


	}
}