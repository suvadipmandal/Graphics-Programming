
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

	sf::VertexArray tringle(sf::Triangles, 3);

	tringle[0].position = sf::Vector2f(120, 50);
	tringle[0].color = sf::Color::White;
	tringle[1].position = sf::Vector2f(220, 350);
	tringle[1].color = sf::Color::Blue;
	tringle[2].position = sf::Vector2f(420, 550);
	tringle[2].color = sf::Color::Red;

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
		window.draw(tringle);
		window.display();
		}


	}
}