
#include "stdafx.h"
#include <SFML\Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window( sf::VideoMode(600,600),"SFML Work:");
	
	sf::VertexArray quad(sf::Quads, 4);

	quad[0].position = sf::Vector2f(400,100);
	quad[0].color = sf::Color::Blue;

	quad[1].position = sf::Vector2f(200,100);
	quad[1].color = sf::Color::Red;

	quad[2].position = sf::Vector2f(50,550);
	quad[2].color = sf::Color::Yellow;

	quad[3].position = sf::Vector2f(550,550);
	quad[3].color = sf::Color::Magenta;

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
		window.draw(quad);
		window.display();
		}


	}
}