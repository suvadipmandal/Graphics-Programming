
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	
	sf::VertexArray tringlestrip(sf::TrianglesStrip, 5);

	tringlestrip[0].position = sf::Vector2f(400,100);
	tringlestrip[0].color = sf::Color::Blue;

	tringlestrip[1].position = sf::Vector2f(200,100);
	tringlestrip[1].color = sf::Color::Red;

	tringlestrip[2].position = sf::Vector2f(50,550);
	tringlestrip[2].color = sf::Color::Yellow;

	tringlestrip[3].position = sf::Vector2f(550,550);
	tringlestrip[3].color = sf::Color::Magenta;

	tringlestrip[4].position = sf::Vector2f(400,100);
	tringlestrip[4].color = sf::Color::Green;

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
		window.draw(tringlestrip);
		window.display();
		}


	}
}